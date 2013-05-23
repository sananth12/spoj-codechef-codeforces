#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,num;
        scanf("%d%d",&num,&m);
        int revn= 0;
         while (num > 0)
         {
          revn = revn * 10 + (num % 10);
          num = num / 10;
          }
          int revm=0;
         while (m > 0)
         {
          revm = revm * 10 +(m % 10);
          m = m / 10;
          }
          int sum=revn+revm;
          int revs=0;
          while (sum > 0)
         {
          revs = revs * 10 +(sum % 10);
          sum = sum / 10;
          }
          printf("%d\n",revs);           
    }
return 0;
}
