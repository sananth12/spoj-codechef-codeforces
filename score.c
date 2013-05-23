#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    float avg;
    while(t--)
    {
              scanf("%f",&avg);
              int w=avg,i;
              float d=avg-w;
              
              for(i=100;i<325;i++)              
              {              if(fmod(d*i,1.0)==0)     
                        {
                              printf("%d\n",i);
                              break;
                        }
                         
              }  
    }              
 return 0;   
}
