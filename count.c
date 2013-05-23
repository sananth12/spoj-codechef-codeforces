#include<stdio.h>
int main()
{
    int t;
    
    long r,l,i,temp,count=0;
    scanf("%ld",&t);
    while(t--)
    {         
              count=0;
         scanf("%ld%ld",&l,&r);            
            for(i=l;i<=r;i++) 
            { 
                   temp=i;
                   if(temp%2==0)
                   count++;
                   
                   else
                   {           
                              while(temp>0)
                              {    
                              if(temp%2==0)
                              {            
                                count++;
                                break; 
                              }
                              else
                              temp=temp/10;
                              }
                              }
            }          
            printf("%ld\n",count);             
    }   
return 0;    
}
