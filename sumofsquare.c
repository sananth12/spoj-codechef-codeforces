#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         int n,i,j,tot=0;
         scanf("%d",&n);
         for(i=1;i<(n);i++)
         {
            for(j=1;j<(n);j++)
            {
               if((i*i)+(j*j)==(n*n))
                 tot++;
            }
         }
         tot/=2;
         tot*=8;
         tot+=4;
         printf("%d\n",tot);
    }
return 0;
}
