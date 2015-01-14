#include <bits/stdc++.h>
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll long long int
using namespace std;
ll a[100007],tree[10005],C[10005];
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

struct attributes
{
	ll sum,rem[3];
};
void build_tree(int node, int a, int b) {
    if(a > b) return;

  	if(a == b)
    {
    	tree[node] = tree[a];
		return;
	}

	build_tree(node*2, a, (a+b)/2);
	build_tree(node*2+1, 1+(a+b)/2, b);
	tree[node] = max(tree[node*2], tree[node*2+1]);
}
void update_tree(int node, int a, int b, int i, int j, int value) {

	if(a > b || a > j || b < i)
		return;

  	if(a == b)
    {
    		tree[node] += value;
    		return;
	}

	update_tree(node*2, a, (a+b)/2, i, j, value);
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value);

	tree[node] = max(tree[node*2], tree[node*2+1]);
}
int query_tree(int node, int a, int b, int i, int j) {

	if(a > b || a > j || b < i)
        return -100;
	if(a >= i && b <= j)
		return tree[node];

	int q1 = query_tree(node*2, a, (a+b)/2, i, j);
	int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j);
	int res = max(q1, q2);
	return res;
}

struct node
{
	attributes A;
	node()
	{
		A.sum=0;
		FOR(i,0,3)
            A.rem[0]=0;
	}
	void setval(ll val)
	{
		A.sum=val;
		A.rem[(val%3)]++;
	}
	void change(ll val)
	{
		A.rem[(A.sum%3)]=0;
		A.sum=val;
		A.rem[(val%3)]++;
	}
	void join(node left,node right)
	{
		A.sum=left.A.sum+right.A.sum;
		ll a=(0+left.A.sum)%3,b=(1+left.A.sum)%3,c=(2+left.A.sum)%3;
		A.rem[a]=right.A.rem[0]+left.A.rem[a],A.rem[b]=right.A.rem[1]+left.A.rem[b],A.rem[c]=right.A.rem[2]+left.A.rem[c];
	}
	attributes getval()
	{
		return A;
	}
};
struct segment_tree
{
	node *nodes;
	ll N;
	segment_tree(ll n)
	{
		N=n;
		ll size;
		for(size=1;size<N;size<<=1);
		size<<=1;
		nodes=new node[size];
		build(1,0,N-1);
	}
	attributes get(ll x,ll y)
	{
		node result=rec_get(1,0,N-1,x,y);
		return result.getval();
	}
	void update(ll x,ll y)
	{
		rec_update(1,0,N-1,x,y);
	}
	void rec_update(ll start,ll beg,ll end,ll index,ll val)
	{
		if(beg==end)
		{
			nodes[start].change(val);
			return;
		}
		ll left=2*start,right=left+1,mid=(beg+end)/2;
		if(index<=mid)
			rec_update(left,beg,mid,index,val);
		else
			rec_update(right,mid+1,end,index,val);

		nodes[start].join(nodes[left],nodes[right]);
	}

	void build(ll start,ll beg,ll end)
	{
		if(beg==end)
		{
			nodes[start].setval(a[beg]);
			return;
		}
		ll left=2*start,right=left+1,mid=(beg+end)/2;
		build(left,beg,mid);
		build(right,mid+1,end);

		nodes[start].join(nodes[left],nodes[right]);
	}
	node rec_get(ll start,ll beg,ll end,ll L,ll R)
	{
		if(end==R && beg==L)
            return nodes[start];

        ll mid=(beg+end)/2;
        if(L>mid)
            return rec_get(1+(start*2),mid+1,end,L,R);
        if(R<=mid)
            return rec_get((start*2),beg,mid,L,R);

		node left=rec_get((start*2),beg,mid,L,mid);
		node right=rec_get(1+(start*2),mid+1,end,mid+1,R);
		node result;
		result.join(left,right);
		return result;
	}
};
int main()
{
	ll x,y,c,n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	FOR(i,0,n)
		a[i]=s[i]-'0';
	segment_tree T(n);
	while(m--)
	{
		cin>>c>>x>>y;
		if(c==1)
		{
			a[x-1]=y;
			T.update(x-1,y);
		}
		else
		{
			attributes r=T.get(x-1,y-1);
			ll zero=r.rem[0]+1;
			zero= zero*(zero-1)/2;
			ll one=r.rem[1];
			one=one*(one-1)/2;
			ll two=r.rem[2];
			two=two*(two-1)/2;
			cout<<(one+two+zero)<<endl;
		}
	}
	return 0;
}
