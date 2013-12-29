#include<stdio.h>
inline long long fastinput()
{
	long long inp=0;char c=0;
        c=getchar_unlocked();
	while(c>='0'&&c<='9')
	{
		inp=inp*10+c-'0';
		c=getchar_unlocked();
	}
	return inp;
}
int main()
{
   long long i,j,y,n,q,k,arr[100001]={0},cum_sum[100001]={0},add[50001][2]={0},pos=0;
   n=fastinput();
   q=fastinput();
   //scanf("%lld%lld",&n,&q);
   for(i=0;i<n;i++)
    {
        arr[i]=fastinput();
        //scanf("%lld",&arr[i]);
        if(i==0)
            cum_sum[0]=arr[0];
        else
            cum_sum[i]=arr[i]+cum_sum[i-1];
    }

    while(q--)
    {
        char s=getchar_unlocked();
        getchar_unlocked();
        long long sum=0;

        i=fastinput();
        j=fastinput();
       // scanf("%lld%lld",&i,&j);
        if(s=='S')
        {
            /*for( k=i;k<=j;k++)
            sum+=arr[k];*/
            if(i>0)
            sum=cum_sum[j]-cum_sum[i-1];
            else
            sum=cum_sum[j];
            for( y=0;y<pos;y++)
            {
                if(add[y][0]>=i && add[y][0]<=j)
                    sum+=add[y][1];
            }
            printf("%lld\n",sum);
        }
        if(s=='G')
        {
            add[pos][0]=i;
            add[pos][1]+=j;
            pos++;
        }
        if(s=='T')
        {

            add[pos][0]=i;
            add[pos][1]-=j;
            pos++;
        }
    }

return 0;
}
