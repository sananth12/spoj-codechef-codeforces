#include<stdio.h>
int main()
{
   int big,temp=0,n,i,a[102]={0},posi=0,posj=0,j=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);

   for(i=0;i<n-1;i++)
   {
       int sum[102]={0};
       for(j=i;j<n-1;j++)
       {
          sum[j]=a[j]-a[j+1];
          if(sum[i]>=big)
          {
              if(a[j+1]-a[j+2]<=temp)
              {
                  big=sum[i];
                  temp=a[j+1]-a[j+2];
                  posi=i;
                  posj=j;
              }
          }
       }
   }
   for(i=posi;i<=posj;i++)
   {
      printf("%d ",a[i]);
   }

return 0;
}
