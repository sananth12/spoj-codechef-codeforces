#include<stdio.h>
void getBin(long long num, char *str)
{
  *(str+63)='0';
  long long mask =0x100000000<<1;
  while(mask >>= 1)
    *str++=!!(mask & num)+'0';  
}

int main()
{   
   long t;
   long long n,m,bin=0;
   int g,i=0;
   
   scanf("%ld",&t);
   while(t--)
   {
         scanf("%lld %d",&n,&g);
         int count=0;
         char str[64]={'0'};
         if(n==1)
         m=1;
         else
         m=(n*(n-1)/2)%1000000007;

         getBin(m,str);
        // printf("%s \n",str);
         for(i=0;i<64;i++)
         {
               if(str[i]=='1')
               count++; 
         }
        // printf("%d\n",count);
         if(count==g)          
         printf("CORRECT\n");
         else
         printf("INCORRECT\n");
   }    
        
                    
  
return 0;    
}
