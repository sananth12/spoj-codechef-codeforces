#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n,i,j,sum=0;
       scanf("%d",&n);
       for(i=1;i<n;i++)
       {
          for(j=i+1;j<=n;j++)
            if((i*j)%(i+j)==0)
              sum++;
       }
       printf("%d\n",sum);
    }
return 0;
}
