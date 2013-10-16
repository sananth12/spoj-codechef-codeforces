/*
-- Anantha Natarajan.S
-- Oct 8 2013
-- Problem LEBAMBOO/OCT13
-- GCC 4.8
*/
#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int i,n,h[51],d[51],flag=1,counter=0,match=0,pos,diff;
       scanf("%d",&n);
       for(i=0;i<n;i++)
       scanf("%d",&h[i]);
       for(i=0;i<n;i++)
       scanf("%d",&d[i]);
       for(i=0;i<n;i++)
        {
           if(h[i]==d[i])
               match++;
        }
        if(match==n)
        printf("0\n");
        else{
       while(flag)
       {
           pos=0,diff=h[0]-d[0];
           match=0;
           for(i=1;i<n;i++)
           {
               if(h[i]-d[i]>=diff)
               {
                   diff=h[i]-d[i];
                   pos=i;
               }
           }
           h[pos]--;
           for(i=0;i<n;i++)
           {
               if(i!=pos)
               {
                   h[i]++;
               }
               if(h[i]==d[i])
               match++;
           }
           counter++;
           if(counter>100 || match==n)
           {
               break;
               flag=0;
           }
       }
       if(match==n)
       printf("%d\n",counter);
       else
       printf("-1\n");
        }
   }

return 0;
}
