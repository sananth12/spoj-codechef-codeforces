#include<stdio.h>
#include<math.h>
int main()
{
   int t;
   double r,root=sqrt(2);
   scanf("%d",&t);
   while(t--)
   {
       scanf("%lf",&r);
       printf("%0.6lf\n",root*r);
   }
return 0;
}
