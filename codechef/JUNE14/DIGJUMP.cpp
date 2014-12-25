#include<bits/stdc++.h>
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

int main()
{
   string s;
   cin>>s;
   vector < int > g[11];
   int i,dp[100002],ans[10000]={0},pos=0,n=s.length(),num=0;
   bool v[100002];
   queue < int > q;

   dp[0]=0;
   v[0]=true;
   q.push(0);
   for(i=0;i<n;i++)
       g[s[i]-'0'].push_back( i );
   bool gv[100];
   while(!q.empty())
   {
        pos=q.front();
        //cout<<pos<<"-";
        if(pos==n-1)
            {
                cout<<dp[pos];
                return 0;
            }
        q.pop();
        num=s[pos]-'0';
        for(i=0;i<g[num].size() && gv[num]==false ;i++)
        {
            if(v[g[num][i]]==false)
            {
                dp[g[num][i]]=dp[pos]+1;
                v[g[num][i]]=true;
                q.push(g[num][i]);
            }
        }
        if(pos!=n-1 && v[pos+1]==false )
        {
            if(gv[ s[pos+1]-'0' ]==false && (s[pos]!=s[pos+1]) ){
            q.push(pos+1);
            dp[pos+1]=dp[pos]+1;
            v[pos+1]=true;}
        }
        if(pos!=0 && v[pos-1]==false)
        {
            if(gv[ s[pos-1]-'0' ]==false && (s[pos]!=s[pos-1]) ){
            q.push(pos-1);
            dp[pos-1]=dp[pos]+1;
            v[pos-1]=true;}
        }
        gv[s[pos]-'0']=true;
   }
}
