#include<stdio.h>

int main()
{
    int t,n[102];
    scanf("%d",&t);
    
    while(t--)
    {
              int i,temp,m,j,pos=0;
              scanf("%d",&m);
              
             for(i=0;i<m;i++) 
              {
                    scanf("%d",&n[i]);       
                               
              }
                
          
             for(i=0;i<m;i++)
              {
                   for(j=i;j<m-1;j++)
                   {
                          if(n[j]>n[j+1])
                          {
                              temp=n[j];
                              n[j]=n[j+1];
                              n[j+1]=temp;           
                          }           
                   }                                            
              }  
                
            
                  int flag=1,big=n[m-1],count=0;
                  
                 for(i=0;i<m-2;i++)
                  n[i]+=(n[m-1]-n[m-2]);
                  
                  
                  count=(n[m-1]-n[m-2]);
                  n[m-2]=n[m-1];
                  
                   while(flag!=0)
                   {
                          flag=0;       
                               
                        for(i=0;i<=m-2;i++)         
                          {
                                if(n[i]>big)
                                {
                                big=n[m-2];
                                n[m-1]++;
                                flag++;        
                                }        
                                else if(n[i]<big)
                                {
                                 n[i]++;
                                 flag++;
                                }   
                                
                                else if(flag)
                                { 
                                    n[m-1]++;
                                    big=n[m-1];
                                    flag++;
                                }                                                    
                           }
                          
                          if(flag!=0)
                          count++;                
                for(i=0;i<m;i++) 
              {
                    printf("%d ",n[i]);       
                               
              }
              printf("\n");
                
                
                   }         
                   printf("%d\n",count);
    }  
}

