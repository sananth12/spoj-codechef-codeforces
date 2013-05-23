#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    scanf("%d",&m);
      
     while(m-->0)
     {
                 int n,i=0,sum[50];
                 
             scanf("%d",&n);
             int b;
             
             
               
               int flag=1,k=0;
                for(i=0;i<50;i++)
                  sum[i]=0;
                  
             for(k=0;k<n;k++)    
              {
                             scanf("%d",&b);      
                  int c[50],j=0;
                  
                  for(i=0;i<50;i++)
                  c[i]=0;
                      while(b>0)
                      {  
                         c[j++]=(b%2);
                      
                         b=b/2;
                                 
                                 }
                                                                                    
                         
                                                  
                                                   
                                          
                                 if(flag==1)
                                 {
                                            
                                          for(i=0;i<50;i++)
                                          sum[i]=c[i];
                                          
                                         
                                          
                                          flag=0;  
                                            
                                            }
                                            
                                       else
                                       {     
                            for(i=0;i<50;i++)
                            {
                                  if((sum[i]+c[i])==2||(sum[i]+c[i])==0)
                                  {
                                           sum[i]=0;         }           
                                                 
                                  else
                                  sum[i]=1;
                                   
                                                                                                                  
                                   }
                         
                         }
                             
                      }
                          
                          int t=0;
                         for(i=0;i<50;i++)
                         {
                                  t= t+(sum[i]* pow(2,i)) ;   
                                   
                                   }   
                                  
                                  printf("%d\n",t);

}      


}
