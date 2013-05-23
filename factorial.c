#include<stdio.h>
 long long factorial(int);
main()
{
      int n,num;
      long long f;
      scanf("%d",&n);           
      
      while(n--)             
      {                             
           scanf("%d",&num); 
  
       f = factorial(num);
       printf("%lld\n",f);
       }
 
 
}

long long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}                    
       
