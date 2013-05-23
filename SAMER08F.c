#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t)
    {       n=(t)*(t+1)*((2*t)+1);
       n/=6;
       printf("%d\n",n);
       scanf("%d",&t);
    }
return 0;
}
