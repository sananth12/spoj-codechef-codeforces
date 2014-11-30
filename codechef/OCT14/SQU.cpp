#include<bits/stdc++.h>
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll long long
using namespace std;
static struct IO {
	char tmp[1 << 10];

	// fast input routines
	char cur;

//#define nextChar() (cur = getc_unlocked(stdin))
//#define peekChar() (cur)
	inline char nextChar() { return cur = getc_unlocked(stdin); }
	inline char peekChar() { return cur; }

	inline operator bool() { return peekChar(); }
	inline static bool isBlank(char c) { return (c < '-' && c); }
	inline bool skipBlanks() { while (isBlank(nextChar())); return peekChar() != 0; }

	inline IO& operator >> (char & c) { c = nextChar(); return *this; }

	inline IO& operator >> (char * buf) {
		if (skipBlanks()) {
			if (peekChar()) {
				*(buf++) = peekChar();
				while (!isBlank(nextChar())) *(buf++) = peekChar();
			} *(buf++) = 0; } return *this; }

	inline IO& operator >> (string &s) {
		if (skipBlanks()) {	s.clear(); s += peekChar();
			while (!isBlank(nextChar())) s += peekChar(); }
		return *this; }

	inline IO& operator >> (double & d) { if ((*this) >> tmp) sscanf(tmp, "%lf", &d); return *this;	}

#define defineInFor(intType) \
	inline IO& operator >>(intType & n) { \
		if (skipBlanks()) { \
			int sign = +1; \
			if (peekChar() == '-') { \
				sign = -1; \
				n = nextChar() - '0'; \
			} else \
				n = peekChar() - '0'; \
			while (!isBlank(nextChar())) { \
				n += n + (n << 3) + peekChar() - 48; \
			} \
			n *= sign; \
		} \
		return *this; \
	}

defineInFor(int)
defineInFor(unsigned int)
defineInFor(long long)

	// fast output routines

//#define putChar(c) putc_unlocked((c), stdout)
	inline void putChar(char c) { putc_unlocked(c, stdout); }
	inline IO& operator << (char c) { putChar(c); return *this; }
	inline IO& operator << (const char * s) { while (*s) putChar(*s++); return *this; }

	inline IO& operator << (const string & s) { for (int i = 0; i < (int)s.size(); ++i) putChar(s[i]); return *this; }

	char * toString(double d) { sprintf(tmp, "c", d, '\0'); return tmp; }
	inline IO& operator << (double d) { return (*this) << toString(d); }


#define defineOutFor(intType) \
	inline char * toString(intType n) { \
		char * p = (tmp + 30); \
		if (n) { \
			bool isNeg = 0; \
			if (n < 0) isNeg = 1, n = -n; \
			while (n) \
				*--p = (n % 10) + '0', n /= 10; \
			if (isNeg) *--p = '-'; \
		} else *--p = '0'; \
		return p; \
	} \
	inline IO& operator << (intType n) { return (*this) << toString(n); }

defineOutFor(int)
defineOutFor(long long)

#define endl ('')
#define cout __io__
#define cin __io__
} __io__;
string F(int a,int b)
{
    return (to_string(a)+","+to_string(b));
}
int main()
{
   int w=0,n;
   cin>>n;
   map < string , int > M;
   string s;
   int x,y;
   vector< pair<int,int> > V;
   FOR(i,0,n)
    {
        cin>>x>>y;
        s=to_string(x)+","+to_string(y);
        M[s]=1;
        V.push_back(make_pair(x,y));
    }
    if(n<=2)
        {
            cout<<(4-n);
            return 0;
        }
    int ans=2;
    FOR(i,0,n)
    {
        FOR(j,i+1,n)
        {

            int x1=V[i].first , x2=V[j].first, y1=V[i].second, y2= V[j].second;
            if(x1==x2 && y1==y2)
                continue;
            int X1 = y2-y1+x2, Y1 = x1- x2 + y2;
            int X2 = y2-y1+x1, Y2 = x1- x2- y1;
            int u=1,v=1;
            if( M.find( F(X1,Y1) )!= M.end() )
                u=0;
            if( M.find( F(X2,Y2) )!= M.end() )
                v=0;
            ans = min(ans,u+v);
            if(ans==0)
                {
                    cout<<"0";
                    return 0;
                }
            X1 = -y2+y1+x2, Y1 = -x1+ x2 + y2;
            X2 = -y2+y1+x1, Y2 = -x1+ x2- y1;
            u=1,v=1;
            if( M.find( F(X1,Y1) )!= M.end() )
                u=0;
            if( M.find( F(X2,Y2) )!= M.end() )
                v=0;
            ans = min(ans,u+v);
            if(ans==0)
                {
                    cout<<"0";
                    return 0;
                }
            X1 = x1+x2+y1-y2, Y1 = y2+y1+x2-x1;
            X2 = x1+x2-y1+y2, Y2 = y2+y1-x2+x1;
            if(X1%2 || X2%2 || Y1%2 || Y2%2)
                {                }
            else
            {
                X1/=2;X2/=2;Y1/=2;Y2/=2;
                u=1,v=1;
                if( M.find( F(X1,Y1) )!= M.end() )
                    u=0;
                if( M.find( F(X2,Y2) )!= M.end() )
                    v=0;
                ans = min(ans,u+v);
                if(ans==0)
                    {
                        cout<<"0";
                        return 0;
                    }
            }
        }
    }
    cout<<ans;
return 0;
}
