#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {    
         int r1,r2,d;
         double s=0;
        scanf("%d%d%d",&r1,&r2,&d);
        
       /* if((d>=r1&&d>=r2))
        {             
                    if(r1+r2<d)
                    {
                               s=d-(r1+r2);
                                  printf("%lf\n",s);   
                    }
                    else
                    {
                        s=0;
                         printf("%lf\n",s);   
                    }
                    
                                              
        }
        
        else if((d>r1)&&(d<=r2)||(d>r2)&&(d<=r1))
    
                    {
                        s=0;
                         printf("%lf\n",s);   
                    }
        
        else        
        {   
             if(r1>r2)
            {
                 s=r1-(d+r2); 
                  printf("%lf\n",s);     
                      
            } 
            else
            {
                 s=r2-(d+r1); 
                  printf("%lf\n",s);  
                }
                   
        }
        */
        
        if((d+r1<r2)||(d+r2<r1))
        {
                
             if(r1>r2)
            {
                 s=r1-(d+r2); 
                  printf("%lf\n",s);     
                      
            } 
            else
            {
                 s=r2-(d+r1); 
                  printf("%lf\n",s);  
                }                
                                
            }
        
        else if((r1+r2<d)&&((d>r1)&&(d>r2)))
        {
              s=d-(r1+r2);
              printf("%lf\n",s);   
         }
         else
         {
             printf("0\n");
             
         }
         
        
        
    }
    
    
return 0;
}
