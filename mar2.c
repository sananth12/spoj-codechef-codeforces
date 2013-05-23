#include<stdio.h>
long long int ncr(long int n,long int x)
{
	long long int ans=1,i;
	if (x>n/2)x=n-x;
	for(i=0;i<x;i++)
		{
			ans=(ans*(n-i))/(i+1);
		}
	return ans;
}
int main()
{	int t;
	long int n,k,x,i;
	long long int ans,temp;
	scanf("%d",&t);
	while(t--)
	{	ans=temp=1;
		scanf("%ld %ld",&n,&k);
		x=n-k;
		printf("%Ld\n",ncr(n-1,x));
	}
	return 0;
}
