#include<stdio.h>
#include<iostream>
using namespace std;
inline long  fastinput()
{
	long inp=0;char c=0;
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
    long i,j,y,n,q,k,pos=0;
   //n=fastinput();
   //q=fastinput();
   cin>>n>>q;
   long cum_sum[n+1],add[q+1][2];
   //scanf("%lld%lld",&n,&q);
   for(i=0;i<n;i++)
    {
        cum_sum[i]=fastinput();
       // cin>>cum_sum[i];
        scanf("%ld",&cum_sum[i]);
        if(i!=0)
            cum_sum[i]=cum_sum[i]+cum_sum[i-1];
    }

    while(q--)
    {
        char s;
        //=getchar_unlocked();
        //getchar_unlocked();
         long long sum=0;
        cin>>s>>i>>j;
        //i=fastinput();
        //j=fastinput();
       // scanf("%lld%lld",&i,&j);
        if(s=='S' || s=='s')
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
           // printf("%lld\n",sum);
           cout<<sum<<endl;
        }
        if(s=='G' || s=='g')
        {
            add[pos][0]=i;
            add[pos][1]=j;
            pos++;
        }
        if(s=='T' || s=='t')
        {

            add[pos][0]=i;
            add[pos][1]=j*(-1);
            pos++;
        }
    }

return 0;
}
