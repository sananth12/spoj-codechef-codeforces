#include<stdio.h>
int power(int a,int b)
{
    long long p=1;
    while(b--)
    {
        p=(p*a)%1000000007;
        p=p%1000000007;
    }
    return p;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
           int n,k;
           long long x=0;
           scanf("%d%d",&n,&k);
           if(n==2)
            printf("%d\n",k);
           else
           {   int i,o=1;
               for(i=(n-3);i>=1;i--)
               {
                   x+=(o*power(k,i));
                   o*=-1;
               }
               x=x%1000000007;
             int ans=(k*x)%1000000007+((k-1)*((power(k,n-2)-x)%1000000007));
             printf("%d\n",ans%1000000007);

           }
    }
return 0;
}
