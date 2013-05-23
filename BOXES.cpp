#include <cstdio>
#include <cstdlib>
#include <stdint.h>
#include <string>
#include <iostream>
#include <unistd.h>
#include <sys/time.h>
#include <stack>
#include <vector>
#include <deque>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

typedef unsigned long long ull;

inline FILE& operator>>(FILE& f, char*& d)
{
    int s = 20;
    d = (char*)malloc(s);
    int chr;
    int i = 0;
    do
    {
        chr = fgetc(&f);
        if(chr == EOF)
            goto OPERATOR_RSHIFT_FILE_CHAR_PTR_end;
    }
    while(chr == '\n' || chr == '\r' || chr == '\t' || chr == ' ');
    do
    {
        if(i == s)
        {
            s *= 2;
            d = (char*)realloc(d, s);
        }
        d[i] = chr;
        chr = fgetc(&f);
        ++i;
    }
    while(chr != EOF && chr != '\n' && chr != '\r' && chr != '\t' && chr != ' ');
    OPERATOR_RSHIFT_FILE_CHAR_PTR_end:;
    d = (char*)realloc(d, i+1);
    d[i] = '\0';
    return f;
}
inline FILE& operator>>(FILE& f, char& chr)
{
    int x;
    do
    {
        x = fgetc(&f);
        if(x == EOF)
        {
            chr = '\0';
            return f;
        }
    }
    while(x == '\n' || x == '\r' || x == '\t' || x == ' ');
    chr = x;
    return f;
}
inline FILE& operator>>(FILE& f, int& x)
{
    char *d;
    f >> d;
    x = atoi(d);
    free(d);
    return f;
}
inline FILE& operator>>(FILE& f, ull& x)
{
    fscanf(&f, "%llu", &x);
    return f;
}
inline FILE& operator>>(FILE& f, float& x)
{
    char *d;
    f >> d;
    x = atof(d);
    free(d);
    return f;
}
inline FILE& operator>>(FILE& f, double& x)
{
    char *d;
    f >> d;
    x = atof(d);
    free(d);
    return f;
}
inline FILE& operator>>(FILE& f, long double& x)
{
    fscanf(&f, "%LE", &x);
    return f;
}
inline FILE& operator>>(FILE& f, string& str)
{
    char *d;
    f >> d;
    str.~string();
    new (&str) string(d);
    free(d);
    return f;
}
inline FILE& operator<<(FILE& f, const char *str)
{
    fputs(str, &f);
    return f;
}
inline FILE& operator<<(FILE& f, int x)
{
    fprintf(&f, "%d", x);
    return f;
}
inline FILE& operator<<(FILE& f, size_t x)
{
    fprintf(&f, "%u", x);
    return f;
}
inline FILE& operator<<(FILE& f, ull x)
{
    fprintf(&f, "%llu", x);
    return f;
}
inline FILE& operator<<(FILE& f, double x)
{
    fprintf(&f, "%.12f", x);
    return f;
}
inline FILE& operator<<(FILE& f, long double x)
{
    fprintf(&f, "%.12Lf", x);
    return f;
}
inline FILE& operator<<(FILE& f, const string& str)
{
    f << str.c_str();
    return f;
}
inline FILE& operator<<(FILE& f, char c)
{
    fputc(c, &f);
    return f;
}
struct _endofline
{
} eol;
struct _flush
{
} clearbuff;
inline FILE& operator<<(FILE& f, const __typeof__(eol)&)
{
    fputc('\n', &f);
//     fflush(&f);
    return f;
}
inline FILE& operator<<(FILE& f, const __typeof__(clearbuff)&)
{
    fflush(&f);
    return f;
}

FILE& lin(*stdin);  // low-level-in
FILE& lout(*stdout);    // low-level-out
FILE& lerr(*stderr);

typedef pair<int,int> PII;

struct node { int sum, tmin; };

node seg[65535] = {};

int n;
int limit;
int depth;

inline bool bottom(int x)
{
    return x >= limit-1;
}

inline bool overflow(int x)
{
    return x >= limit-1+n;
}

void buildSegs(int x)
{
    if(bottom(x))
        return;
    buildSegs(2*x+1);
    buildSegs(2*x+2);
    node& s(seg[x]);
    s.sum = seg[2*x+1].sum + seg[2*x+2].sum;
    s.tmin = min(seg[2*x+1].tmin, seg[2*x+1].sum + seg[2*x+2].tmin);
}

void add(int x, int k, int a)
{
//     lerr << k << eol;
    node& s(seg[x]);
    if(bottom(x))
    {
        s.sum *= -1;
        s.tmin = s.sum;
    }
    else
    {
        if(k & (1 << a))
            add(2*x+2, k xor (1 << a), a-1);
        else
            add(2*x+1, k, a-1);
        s.sum = seg[2*x+1].sum + seg[2*x+2].sum;
        s.tmin = min(seg[2*x+1].tmin, seg[2*x+1].sum + seg[2*x+2].tmin);
    }
}

void dump(int x, int d = 0)
{
    if(overflow(x))
        return;
    for(int i = 0; i != d; ++i)
        lerr << "  ";
    lerr << x << " Min: " << seg[x].tmin << " Sum: " << seg[x].sum << eol;
    dump(2*x+1, d+1);
    dump(2*x+2, d+1);
}

int main()
{
    int t = 10;
    for(int _i = 0; _i != t; ++_i)
    {
        memset(seg, 0, 65535 * sizeof(node));
        lout << "Test " << (_i+1) << ':' << eol;
        lin >> n;
        limit = 1;
        depth = 0;
        while(limit < n)
        {
            limit <<= 1;
            ++depth;
        }
        string data;
        lin >> data;
        for(int i = limit-1; !overflow(i); ++i)
        {
            seg[i].tmin = (data[i-limit+1] == '(' ? 1 : -1);
            seg[i].sum = seg[i].tmin;
        }
        buildSegs(0);
        int m;
        lin >> m;
        for(int i = 0; i != m; ++i)
        {
            int k;
            lin >> k;
            if(k == 0)
                lout << (seg[0].tmin != 0 || seg[0].sum != 0 ? "NO\n" : "YES\n");
            else if(k == -1)
                dump(0);
            else
                add(0, k-1, depth-1);
        }
    }
}


