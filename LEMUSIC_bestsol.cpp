#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

#define getcx getchar_unlocked
inline void inp( int &n )//fast input function
{
   n=0;
	int ch=getcx();
   while( ch < '0' || ch > '9' ){ ch=getcx();}

   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
}
int main()
{
	int t;
	scanf("%d",&t);
	while ( t-- )
	{
	 int n, i, x, y;
	//scanf("%lld",&n);
	inp(n);
	vector< pair<int,int> > v;
	vector<int> v1;
	long long h = 0;
	for ( i = 0; i < n; i++ )
	{
		//scanf("%lld%lld",&x,&y);
		inp(x);
		inp(y);
		v.push_back(make_pair(x,y));
		h += y;
	}
	sort(v.begin(),v.end());
	vector< pair<int,int> > :: iterator it;
	for ( it = v.begin(); it != v.end();)
	{
		v1.push_back((*it).second);
		int pogo = (*it).first;
		while ( pogo == (*it).first && it != v.end() )
		{
			it++;
		}
	}
	long long s = 0;
	sort(v1.begin(),v1.end());
	vector<int> :: iterator it1;
	int l = 0;
	long long p=0,q;
	for ( it1 = v1.begin(); it1 != v1.end(); it1++ )
	{
		l++;
		p+=(*it1);
		q = (*it1);
		q*=l;
		s += q;
	}
	h-=p;
	h*=l;
	s += h;
	printf("%lld\n",s);
	}
	return 0;
}
