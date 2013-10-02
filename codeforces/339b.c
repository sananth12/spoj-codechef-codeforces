#include<stdio.h>
int main()
{
   int i,m,n,temp=0,past=1;
   long ans=0;
   scanf("%d%d",&n,&m);
   for(i=0;i<m;i++)
   {
       scanf("%d",&temp);
       if(temp>past)
       {ans += ( temp-past );
        past=temp;
       }
       else if(temp<past)
       {
           ans+=(n-past+temp);
           past=temp;
       }
   }
   printf("%ld",ans);
return 0;
}
