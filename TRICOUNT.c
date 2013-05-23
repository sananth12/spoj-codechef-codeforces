#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         long long s,n;
         scanf("%lld",&n);
         if(n%2==0)
         {
          n/=2;
          s=4*(n*n*n) + 5*n*n + n;
          s/=2;
         }
         else
         {
            n=(n-1)/2;
            s=4*(n*n*n) + 11*(n*n) +9*(n) +2;
            s/=2;
         }        printf("%lld\n",s);
    }
return 0;
}
