#include<bits/stdc++.h>
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
int main()
{
   ll n,p,k,a,b,i,x;
   cin>>n>>k>>p;
   vector < pair<int, int> > V;
   vector < pair<int, int> >::iterator it,prev;
   vector <int>::iterator I;
   ll ans[100002][2]={0},pos[100002]={0};
    for(i=1;i<=n;i++)
    {
        cin>>x;
        pos[i]=x;
        ans[i][0]=(x-k);
        ans[i][1]=x+k;
        V.push_back(make_pair(x,i));
    }


    sort(V.begin(),V.end());
    it=V.begin();
    ++it;
    for( prev=V.begin();it!=V.end();++it,++prev)
    {
        ll r=(it->second),l=(prev->second);
        if( it->first- prev->first <=k)
        {
            ans[ it->second ][0]=ans[prev->second][0];
            //cout<<it->second<<" "<<ans[prev->second][0]<<endl;
        }
    }
    while(p--)
    {
        cin>>a>>b;
        if(pos[b]>pos[a]){swap(a,b);}

        if(ans[a][0]<=pos[b])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

return 0;
}
