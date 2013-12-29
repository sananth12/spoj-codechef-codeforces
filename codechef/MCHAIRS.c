#include<stdio.h>
#define MOD 1000000007;
long long exp(long long  base, long long  exp) {
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
   int n,t;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
       printf("%lld\n",exp(2,n)-1);

   }
return 0;
}
