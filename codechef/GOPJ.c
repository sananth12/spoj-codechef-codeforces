#include<stdio.h>
#include<math.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
      int n,b,i,sum=0,sum2=0;
      scanf("%d%d",&n,&b);
      sum=1;
      if(sum==b)
      sum=0;
      for(i=2;i<=n;i++)
      {
         if(sum+i!=b)
         sum+=i;
         if(sum2+i!=b)
         sum2+=i;
      }
      printf("%d\n",sum>sum2?sum:sum2);
   }


return 0;
}
