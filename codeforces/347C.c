#include<stdio.h>
int main()
{
   int n,T,t,max=0;
   scanf("%d",&t);
   T=t;
   while(t--)
   {
      scanf("%d",&n);
      if(n>=max)
      max=n;
   }
   if((max-T)%2==0)
   printf("Bob");
   else
   printf("Alice");

return 0;
}
