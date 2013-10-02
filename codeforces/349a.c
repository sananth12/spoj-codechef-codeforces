#include<stdio.h>
int main()
{
   int i,n,temp,a=0,b=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&temp);
       if(temp==25)
       a++;
       if(temp==50)
       b++;

       if(temp==50)
       {
           if(a>=1)
           a--;
           else
           {
               printf("NO");
               return 0;
           }
       }
       if(temp==100)
       {
           if(a>=1 && b>=1)
           {
               a--;
               b--;
           }
           else if(a>=3)
           a-=3;
           else
           {
               printf("NO");
               return 0;
           }
       }
   }

printf("YES");
return 0;
}
