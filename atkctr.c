#include<stdio.h>

int main()
{
    int t,flag=1;
    long long n,m,t1,t2,i=0,j,win[100000]={0},loss[100001]={0}; 
    scanf("%d",&t);
    while(t--)
    {
         scanf("%lld%lld",&n,&m);
         i=m;
         flag=1;
         while(i--)
         {
             scanf("%lld%lld",&t1,&t2);
             win[t1]++;  
             loss[t2]++;                 
         }        
         for(i=n;i>0;i--)
         {
             if(loss[i]==0)
             {
                 if(win[i]==(n-i))
                 {
                    flag=0;
                    printf("2 %d\n",i);
                    break;
                    
                 }  
             }                
         }                                                           
      if(flag)       
      printf("1\n");
    
    }
              

return 0;
}
