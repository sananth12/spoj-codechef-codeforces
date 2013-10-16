#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
      long long ans=0,n;
      scanf("%lld",&n);
      if(n<=2)
      printf("0\n");
      else
      {
          while(n>1)
          {
             ans+=n%2;
             n=(n+1)/2;
          }
          printf("%lld\n",ans);
      }
   }

return 0;
}
