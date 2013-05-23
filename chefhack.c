#include<stdio.h>
int main()
{
  int t,f;
  scanf("%d",&t);  
  int prime[10000],pos=0;
  
  long i1,j1;
  for(i1=2;i1<10000;i1++)
    {       
            f=1;
           for(j1=2;j1<i1;j1++)                
           { if(i1%j1==0)               
                 f=0;
                 }
              if(f)            
            prime[pos++]=i1;
                    
     }

  
  while(t--)  
   {
       int n,i,j;
       scanf("%d",&n);
       int s[351][351],count=0,h[351][351]={0},flag[350][350]={1},k=0; // 0 prime ,1 odd ,2 even
       
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           scanf("%d",&s[i][j]);
                        
       }
       
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
            {
                             if(s[i][j]%2==0&&s[i][j]!=2)
                             h[i][j]=2;
                             
                             else
                             {
                                 for(k=2;k<(s[i][j]/2);k++)
                                 if(s[i][j]%k==0)
                                 h[i][j]=1;
                                                                  
                             }           
            }
            
       }
    
    
        for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
              
           if(flag[i][j]==1)
           {
              
              if(h[i][j]==2)                  
              count+=(s[i][j]/2);         
              
              
             
              else 
              {   
                    
                  if(h[i][j]==1)
                  {
                       count+=((s[i][j]/2)+2);
                       
                  }
                  
                  else
                  {   int u;
                      for(u=0;u<1000;u++)
                      {
                                   if(prime[u]==s[i][j])
                                   {
                                        count+=u;                
                                   }
                                   
                                   
                        }
                   }  
                  }        
                 }   
              
           //grid hacking
           int g=0;
           while(h[i+g][j]==h[i][j]&&i+g<=n)
           {
                   flag[i+g][j]=0;
                   g++;
           }
           
                g=0;
           
           
           while(h[i][j+g]==h[i][j]&&i+g<=n)
           {
                   flag[i][j+g]=0;
                   g++;
            }
           
                g=0;
           
                 while(h[i][j-g]==h[i][j]&&i-g>0)
                {
                   flag[i][j-g]=0;
                   g--;
                }
                
                
                
                g=0;
                 while(h[i-g][j]==h[i][j]&&i-g>0)
                 {
                   flag[i-g][j]=0;
                   g--;
                }
               
           }
           
           
           
           }

           printf("%d",count);                        
       }
       
   
              
   } 
    
    
    

