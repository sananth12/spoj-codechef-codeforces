#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define MAXN 100005
#define MAXK 11
int p[100005];
int kp[100005][11];
void sieve()
{
	FOR(i,2,MAXN)
		if(p[i]==0)
			for(int j=i;j<MAXN;j+=i)
				p[j]++;
	FOR(i,2,MAXN)
		FOR(j,1,MAXK)
			kp[i][j]=kp[i-1][j]+(p[i]==j?1:0);
}
int main()
{

	sieve();
	int t,a,b,k;
	cin>>t;
	while(t--)
	{
	  cin>>a>>b>>k;
	  printf("%d\n",kp[b][k]-kp[a-1][k]);
	}
	return 0;
}
