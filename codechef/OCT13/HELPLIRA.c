#include<stdio.h>
int main()
{
   float big=0,small=1000000,area=0;
   int x1,y1,x2,y2,x3,y3,t,i,small_pos=0,big_pos=0;
   scanf("%d",&t);

   for(i=0;i<t;i++)
   {
       scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
       area= x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);

       if(area<0)
       area*=-1;

       if(area<=small)
       {
           small=area;
           small_pos=i+1;
       }
       if(area>=big)
       {
           big=area;
           big_pos=i+1;
       }
   }
   printf("%d %d",small_pos,big_pos);

return 0;
}
