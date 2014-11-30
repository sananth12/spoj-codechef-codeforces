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
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n;
        cin>>n;
        int c,i,j,q,x,y,S[10002],chef_own[10002],chef_max[10002],s;

        for(i=1;i<=n;i++)
        {
            //cin>>S[i];
            scanf("%d",&S[i]);
            chef_own[i]=i;
            chef_max[i]=S[i];
        }
        cin>>q;
        while(q--)
        {
            x=0,y=0;
            scanf(" %d",&s);
            if(s==0)
            {
                //cout<<"@";
                scanf(" %d %d",&x,&y);
                int X=x,Y=y;
                vector <int> V,W;
                vector <int>::iterator it;
                while(chef_own[X]!=X){
                    V.push_back(X);
                    X=chef_own[X];}
                for(it=V.begin();it!=V.end();++it)
                    chef_own[*it]=X;

                while(chef_own[Y]!=Y){
                    W.push_back(Y);
                    Y=chef_own[Y];}

                for(it=W.begin();it!=W.end();++it)
                    chef_own[*it]=Y;

                if(chef_own[X]==chef_own[Y])
                    cout<<"Invalid query!\n";
                else
                {
                    if(chef_max[chef_own[X]] == chef_max[chef_own[Y]])
                    {}
                    else if(chef_max[chef_own[X]] > chef_max[chef_own[Y]])
                    {
                        chef_own[Y]=chef_own[X];
                    }
                    else
                    {
                            chef_own[X]=chef_own[Y];
                    }
                }
            }
            else
            {
                //cout<<"??"<<s<<">>";
                scanf(" %d",&x);
                int X=x;
                vector <int> V;
                vector <int>::iterator it;
                while(chef_own[x]!=x)
                {
                    V.push_back(x);
                    x=chef_own[x];
                }
                for(it=V.begin();it!=V.end();++it)
                    chef_own[*it]=x;
                cout<<x<<"\n";
            }
            //cout<<"Done.";
        }
   }
return 0;
}
