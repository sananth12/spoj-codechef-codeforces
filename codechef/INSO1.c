#include<stdio.h>
int main()
{
   int t,n,m,i,x,y;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d%d",&n,&m);
      int a[100005]={0},ans=0;
      while(m--)
      {
          scanf("%d%d",&x,&y);
          if(a[x]==0 && a[y]==0)
          {
              ans+=2;
              a[x]=1;
              a[y]=1;
          }
      }
      for(i=0;i<n;i++)
     printf("%d",a[i]);
      for(i=0;i<n;i++)
      {
          if(a[i]==0)
          {
              ans+=2;
              break;
          }
      }
      printf("%d\n",ans);
   }

return 0;
}
