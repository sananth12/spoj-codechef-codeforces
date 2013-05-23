#include<stdio.h>
#define lim 100000
#define m(a) (a)%1073741824
long long d[lim+1];
int main()
{
    long long n,i,j,k,a,b,c,s=0;
    for(i=2;i<=lim;i++)
        for(j=i;j<=lim;j+=i)
            d[j]++;
    scanf("%lld%lld%lld",&a,&b,&c);
    for(i=1;i<=a;i++)
    for(j=1;j<=b;j++)
    for(k=1;k<=c;k++)
    s=m(s+d[i*j*k]+1);
    printf("%lld",s);
    return 0;
}
