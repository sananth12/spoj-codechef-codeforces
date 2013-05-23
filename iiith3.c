#include<stdio.h>
long long fact(int x)
{
    long long i=2,fac=1;
    for(i=2;i<=x;i++)
    fac*=i;

    return(fac);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[256],b[256];
        scanf("%s%s",&a,&b);
        int la=strlen(a);
        int lb=strlen(b);
        int n=la+lb;
        if(n==1)
        printf("1\n");
        else if(n==2)
        printf("2\n");
        else
        printf("%lld\n",fact(n)/(fact(la)*fact(lb)) );
        
       
                  
    }
return 0;
}
