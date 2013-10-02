#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       long long a,b;
       scanf("%lld%lld",&a,&b);
       if( a%4!=1 && a%4!=3 && b%4!=1 && b%4!=3 )
       printf("A\n");
       else
       printf("B\n");
   }
return 0;
}
