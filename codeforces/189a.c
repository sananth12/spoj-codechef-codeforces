#include<stdio.h>
int main()
{
   int max=0,n,a,b,c,i,j,k;
   scanf("%d%d%d%d",&n,&a,&b,&c);
   for(i=0;i<=n/a;i++)
    for(j=0;a*i+b*j<=n;j++)
      {
          if( (n - a*i - b*j)%c==0)
          {
              if((i+j+ (n - a*i - b*j)/c)>=max)
              max=i+j+(n - a*i - b*j)/c;
          }
      }
   printf("%d\n",max);

return 0;
}
