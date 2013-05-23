#include<stdio.h>
int main()
{
   int t,n,j,vote[101];
   char id[101][20],v;
   scanf("%d",&t);    
    
   while(t--) 
    {
          scanf("%d",&n);        
          int i=0,pos=0,total=0,tempcount=0;
          for(i=0;i<n;i++)
            { scanf("%s %c",id[i],&v);
              if(v=='+')
              vote[i]=1;
              else
              vote[i]=-1;
                        }
                        
              for(i=0;i<n;i++)
            { printf("\n%s %d\n",id[i],vote[i]);
             
                        }          
            
          for(i=0;i<n;i++)
          {
             for(j=i;j<n;j++)
                {   
                    tempcount=0;
                    if(strcmp(id[i],id[j])==0)
                    {
                                              pos=j;  
                                              tempcount=vote[j];
                                              vote[j]=0;
                    }
                    
                    total+=tempcount;         
                }             
                  
                          
          }
            
            printf("%d\n",total);
             
              
    }
    
}
