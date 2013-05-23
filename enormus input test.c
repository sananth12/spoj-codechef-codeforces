#include<stdio.h>
int main()
{
   long long n,k,count=0; 
   long long a;
   scanf("%lld%lld",&n,&k);   
   while(n--)
   {
     scanf("%lld",&a);
     if(a%k==0)
     count++;  
            
   } 
   printf("%lld",count);
   return 0;
}
