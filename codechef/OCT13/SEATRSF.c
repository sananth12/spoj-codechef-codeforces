#include<stdio.h>
#define MOD 1000000007
long long mod(long long a1, long long b1)
{ return (a1%b1+b1)%b1; }
long long expo(long long  base, long long exp) {
    long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
int main()
{
   long long n,m,q;
   int t,k;
   scanf("%d",&t);
   while(t--)
   {
        scanf("%lld%lld%lld%d",&n,&m,&q,&k);
        long long a=q-1,b=q+1,c=q,ans=0;
        if(q>=m || (n==1 && q!=0))
        printf("0\n");
        else
        {
           a=expo(a,n);
           b=expo(b,n);
           c=expo(c,n);
           /*ans=(a+b)%MOD;
           ans=mod((ans-2*c),1000000007);*/
           ans=(a+b)%MOD - (2*c)%MOD + MOD;
           ans=(ans*(m-q))%1000000007;
           printf("%lld\n",ans);
        }
        }
return 0;
}
