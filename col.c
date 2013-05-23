#include <cstdio>
#include<stdio.h>
typedef long long LL;
const int MOD = 1000000007;
int f[100001];

int main()
{
	int TST,tst;
	scanf("%d",&TST);
	for(tst=0;tst<TST;tst++)
	{
		int n,m,k;
		scanf("%d%d",&n,&m);
		for(k=0;k<=m;k++) f[k]=1;
		f[m+1]=m;
		for(k=m+2;k<=n;k++)
		{
			f[k]=(2*f[k-1]-f[k-m-1])%MOD;
			if(f[k]<0) f[k]+=MOD;
		}
		int ans=f[n];
		for(k=1;k<m;k++)
			ans=(ans+LL(m-k)*f[n-k])%MOD;
		for(k=1;k<=m;k++)
			ans=LL(ans)*k%MOD;
		printf("%d\n",ans);
	}
	return 0;
}
