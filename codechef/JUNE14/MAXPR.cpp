#include<bits/stdc++.h>
#include<stdio.h>
#define MOD 1000000007
using namespace std;
static struct IO {
	char tmp[1 << 10];


	char cur;

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

long long fast_exp(long long base, long long exp) {
    long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
using namespace std;
int main()
{
   long long t,n,i,j;
   cin>>t;
   while(t--)
   {
        cin>>n;
        long long ans=0;
        long long x,arr[105][205]={0},map[105]={0}; // jth is diff + 100

        for(int N=0;N<n;N++)
        {
            cin>>x;
            map[x]++;
            for( j=1;j<101;j++)
            {
                if(j==x)
                    arr[x][100]+= (arr[x][100] + 1)%MOD;
                else
                    arr[x][x-j +100] = ( arr[x][x-j +100] + map[j]  + arr[j][x-j+100] ) %MOD;

            }

        }

        for(i=1;i<=100;i++)
        {
            for(j=0;j<=200;j++)
            {
                ans= ( ans+arr[i][j])%MOD;
                /*if( arr[i][j])
                    cout<<i<<" "<<j<<"="<<arr[i][j]<<endl;*/
            }
        }

        ans = fast_exp(2LL,n) - 1LL - ans +1000000007LL;
        ans = ans%MOD;
        cout<<ans<<endl;

   }

return 0;
}
