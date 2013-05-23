#include<stdio.h>
#include<math.h>
int main()
{   int c,b,t,i=0,tot=0;
   scanf("%d %d %d",&c,&b,&t);
   int cs[50005]={0},bs[50005]={0};
   while(t--)
   {
       int x,y;
     scanf("%d %d",&x,&y);
     if(cs[x]==0&&bs[y]==0)
     {
       tot++;
       cs[x]=1;
       bs[y]=1;
     }
   }
printf("%d",tot);
return 0;
}
