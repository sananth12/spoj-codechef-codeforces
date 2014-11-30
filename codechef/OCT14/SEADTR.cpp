#include<bits/stdc++.h>
int INSERT_COST;
int DELETE_COST;
int  REPLACE_COST;
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
int min(int a,int b) {
   return ((a < b) ? a : b);
}
int editDistance(char str1[],int size1,char str2[],int size2) {
   int cost[size1][size2];
   int i,j;
   for (i=0;i<size1;i++) {
      for(j=0;j<size2;j++) {
         if (i == 0) {
            cost[i][j] = j*INSERT_COST;
         } else if (j == 0) {
            cost[i][j] = i*DELETE_COST;
         } else {
            cost[i][j] = -1;
         }
      }
   }
   for(i=1;i<size1;i++) {
      for(j=1;j<size2;j++) {
         int x = cost[i-1][j] + DELETE_COST;
         int y = cost[i][j-1] + INSERT_COST;
         int z = cost[i-1][j-1] + (str1[i-1] != str2[j-1])*REPLACE_COST;
         cost[i][j] = min(x, min(y,z));
      }
   }
   return cost[size1-1][size2-1];
}
vector< vector<int> > t(100000 + 1, vector<int>(100000 + 1));

int main() {
   int t;
   cin>>t;
   while(t--)
   {
        char str1[100002],str2[100002];
        int size1 = strlen(str1);
        int size2 = strlen(str2);
        cin>>str1>>str2;
        int a,b,k;
        cin>>a>>b>>k;
        INSERT_COST=a, DELETE_COST=a, REPLACE_COST=b;
        int min_cost = editDistance(str1,size1+1,str2,size2+1);
        if(min_cost>k)
            min_cost=-1;
        //cout<<"\nMinimum edits required to convert "<<str1<<" to "<<str2<<" is "<<min_cost;
        cout<<min_cost<<"\n";
   }
    return 0;
}
