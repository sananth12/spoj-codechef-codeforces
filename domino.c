#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double fib;
    long long n[100000],i;
    n[1]=1,n[2]=1;
    for(i=3;i<80000;i++)
        n[i]=(n[i-1]%1000000007)+(n[i-2]%1000000007);
    scanf("%d",&t);
    while(t--)
    {
        double k,x,y;
        x=(1+sqrt(5))/2;
        y=(1-sqrt(5))/2;
        scanf("%lf",&k);
       // printf("%lld\n",n[k]%1000000007);
        fib=(1/sqrt(5))*(pow(x,k)-pow(y,k));
        printf("%lld\n",(int)fib%1000000007);

    }

return 0;
}
