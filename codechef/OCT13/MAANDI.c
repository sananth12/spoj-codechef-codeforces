# include <stdio.h>
# include <math.h>
int main()
{
    int i,t,n,count,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        count=0;
        for (i = 1; i <= sqrt(n); i++)
        {
            if(n%i == 0)
            {
                p=i;
               while(p)
               {
                   if(p%10==4 || p%10==7)
                   {
                       count++;
                       break;
                   }
                   p=p/10;
               }
               p=(n/i)==i?0:(n/i);
               while(p)
               {
                   if(p%10==4 || p%10==7)
                   {
                       count++;
                       break;
                   }
                   p=p/10;
               }
            }

        }
         printf("%d\n",count);
    }
    return 0;
}
