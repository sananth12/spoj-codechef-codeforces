#include<stdio.h>
int main()
{
   int i,j,n,t,num[100005]={0},ans=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&t);
       num[t]=i;
       if(t==i)
       ans++;
   }
   if(ans==n)
   {
       printf("%d",ans);
       return 0;
    }
   for(i=0;i<n;i++)
   {
       if(num[i]!=i)
       {
           if(num[num[i]]==i)
           {
               ans+=2;
               printf("%d",ans);
               return 0;
           }
       }
   }
   printf("%d",ans+1);
return 0;
}
