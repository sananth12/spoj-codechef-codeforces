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

int gcd(int a,int b)
{
  if(a>b)
    swap(a,b);
  int tmp=a;
  while(a)
    {
      tmp = a;
      a = b%a;
      b = tmp;
    }
  return b;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      int i,n,q;
      cin>>n>>q;
      int a[n],dpf[n],dpb[n];

      for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0)
                dpf[i]=a[i];
            else
                dpf[i] = gcd(dpf[i-1],a[i]);
        }
       dpb[n-1] = a[n-1];

       for(i=n-2;i>=0;i--)
       {
           dpb[i] = gcd(dpb[i+1],a[i]);
           //cout<< dpb[1]<<"~~";
       }

       while(q--)
       {
           int l,r,ans=1;
           cin>>l>>r;
            if(l==1)
                ans=dpb[r];
            else if(r==n)
                ans = dpf[l-2];
            else
                ans = gcd(dpf[l-2],dpb[r]);
           cout<<ans<<endl;
       }
    }
  return 0;
}
