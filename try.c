#include<stdio.h>
long fact(int x)
{
    long i=2,fac=1;
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
        char *a,*b;
        scanf("%c%c",&a,&b);
        int la=strlen(a);
        int lb=strlen(b);
        int n=la+lb;
        if(n==1)
        printf("1\n");
        else if(n==2)
        printf("2\n");
        else
        printf("%ld\n",fact(n)/(fact(la)*fact(lb)) );
                  
    }
return 0;
}
