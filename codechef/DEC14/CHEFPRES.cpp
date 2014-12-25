#include<bits/stdc++.h>
#define ll long long
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define MOD 1000000007
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

	inline IO& operator >> (string & s) {
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

	char * toString(double d) { sprintf(tmp, "%lf%c", d, '\0'); return tmp; }
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

#define endl ('\n')
#define cout __io__
#define cin __io__
} __io__;

vector <int> v[100005];
vector <int> p[105];
int visited[100005]={0},VAL[100005]={0},ans=0;
void DFS(int src,int val)
{
    visited[src]=1;
    VAL[src]=val;
    FOR(i,0,v[src].size())
    {
        if( !visited[v[src][i]] )
            DFS(v[src][i],val+1);
    }
}
int A,MAX=0;
void solve(int src,int curr_dist,vector<int> dest)
{
    visited[src]=1;
    if(VAL[src]<curr_dist)
        curr_dist=VAL[src];
    FOR(i,0,dest.size())
    {
        if(src==dest[i])
        {
            if(curr_dist>MAX)
            {
                MAX=curr_dist;
                ans=src;
            }
            else if(curr_dist==MAX)
                ans=min(ans,src);
        }
    }
    FOR(i,0,v[src].size())
    {
        if(!visited[v[src][i]])
            solve(v[src][i],curr_dist,dest);
    }
}
int main()
{
    int P,n,k,b,x,y,prod,q;
    cin>>n>>k>>b;
    FOR(i,0,n-1)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(b,0);
    FOR(i,1,n+1)
    {
        cin>>prod;
        p[prod].push_back(i);
    }
    FOR(i,1,k+1)
        sort(p[i].begin(),p[i].end());
    cin>>q;
    FOR(Q,0,q)
    {
        cin>>A>>P;
        if(p[P].empty())
            cout<<-1<<endl;
        else if(A==b)
            cout<<p[P][0]<<endl;
        else
        {
            ans=p[P][p[P].size()-1];
            MAX=0;
            memset(visited,0,100005);
            solve(A,INT_MAX,p[P]);
            cout<<ans<<endl;
        }
    }
    return 0;
}
