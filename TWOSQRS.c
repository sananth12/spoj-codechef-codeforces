#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        i=2;
        while(i*i<=n&&flag==0)
            {
                if(n%i==0)
                {
                    if(i%4==1)
                      flag++;

                    n /= i;

                }
                else
                    i++;
            }
          if(flag)
                printf("NO\n");
          else
            printf("YES\n");
    }
return 0;

}