#include<stdio.h>
int main()
{
    int t1,i,x=0;
    long long n1,c;
    scanf("%d",&t1);
    while(t1--)
    {
        scanf("%lld",&n1);
        if(n1%2==1)
            c=((n1*n1-2*n1+1)/4)%n1;
        else
            c=((n1-2)*(n1-2)/4)%n1;
        printf("%lld\n",c);
    }
    return 0;
}
