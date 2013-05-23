#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
      int x,y,a,b,X,Y;
      scanf("%d%d",&a,&b);
      scanf("%d%d",&x,&y);
      X=y>(b/2)?(y-1):(b-y);
      Y=x>(a/2)?(x-1):(a-x);
      printf("%d\n",X+Y);
   }

return 0;
}
