#include<stdio.h>
int check(int);
int main()
{
	int count,i,N,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		count=0;
		for(i=1;i*i<=N;i++)
			if(N%i==0)
				count+=check(i)+((i*i!=N)?check(N/i):0);
		printf("%d\n",count);
	}
	return 0;
}
int check(int num)
{
	int dig;
	while(num>0)
	{
		dig=num%10;
		if((dig==3) || (dig==6) || (dig==5))
			return 1;
		num/=10;
	}
	return 0;
}
