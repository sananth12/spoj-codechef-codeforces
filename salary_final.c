#include<stdio.h>
int t,n[100]={0};
int main()
{
    
    scanf("%d",&t);
    
    while(t--)
    {
              int i,temp,m,j;
              scanf("%d",&m);
              
             for(i=0;i<m;i++) 
                    scanf("%d",&n[i]);       
                               
               for(i=0;i<m;i++)
              {
                   for(j=0;j<m-1;j++)
                   {
                          if(n[j]>=n[j+1])
                          {
                              temp=n[j];
                              n[j]=n[j+1];
                              n[j+1]=temp;           
                          }           
                   }                                            
              }  
              
                
              
              int count=0;
              j=1;
              
              for(i=m-1;i>0;i--)
              {
                                count=count+((n[i]-n[i-1])*j);
                                j++;  
                               
                                 
              }
              printf("%d\n",count);
              
      }
    return 0;  
}
