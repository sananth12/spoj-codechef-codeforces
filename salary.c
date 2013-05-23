#include<stdio.h>
int t,n[100];
/*int fastRead()
{
    int input;
    char c=0;
    while (c<33) c=getchar_unlocked();
    input=0;
    while (c>33)
    {
          input=input*10+c-'0';
          c=getchar_unlocked();
    }
    return input;
}
*/
int main()
{
    
     int i,temp,m,j;
    scanf("%d",&t);
    
    while(t--)
    {
             
              scanf("%d",&m);
               for(i=0;i<m;i++) 
              {
                  scanf("%d",&n[i]);
                               
              }
  

                  int flag=1,big=n[m-1],count=0,pos=m-1;

                   while(flag!=0)
                   {
                          flag=0;       
                   
                        for(i=0;i<m;i++)      
                          {
                                if(n[i]>big)
                                {
                                big=n[i];
                                pos=i;
                                flag++;                                       
                                }        
                                if(n[i]<big)
                                flag++;                                
                           }
                          
                          if(flag)                         
                          {   count++;
                           for(j=0;j<m;j++)
                           {
                              if(j!=pos)
                               n[j]++;
                                            
                               }                  
                          } 
                        
                            for(i=0;i<m;i++) 
              {
                    printf("%d ",n[i]);       
                               
              }
              printf("\n");
     
                   }
                   
                   printf("%d\n",count);
                   
                     
                     }
    return 0;
    
}
