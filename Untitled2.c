#include<stdio.h>
long long Fibonacci(long long n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
int main()
{
    long long t,n,m,i,sum=0,a,b,temp;
    scanf("%lld",&t);
    while(t--)
    {   sum=0;
       scanf("%lld %lld",&n,&m);
       a=Fibonacci(i)%1000000007;
       b=Fibonacci(i+1)%1000000007;
       for(i=n;i<=m;i++)
       {
                        sum+=(a+b);
                        temp=b;
                        b=a+b;
                        a=b;
       }
                        
                        
       
       printf("%lld\n",sum%1000000007);
    }  
return 0;
}  
