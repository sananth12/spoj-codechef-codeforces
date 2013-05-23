#include<stdio.h>
int hcf(int a, int h) 
{
  int temp; 
 while(1)
  {
  temp = a%h;
  if(temp==0)
  return h;
  a = h;
  h = temp;
  }
} 

int main()
{
    int t,n[100]={0},N;
    scanf("%d",&t);
    
    while(t--)
    {
              scanf("%d",&N);
              int i,j,count=0;
              for(i=0;i<N;i++)
              scanf("%d",&n[i]);
                              
              
              for(i=0;i<N-1;i++)
              {
                 for(j=i+1;j<N;j++)
                    if(hcf(n[i],n[j])==1)
                    count++;
                                              
              }                
                              
              
             printf("%d\n",count); 
              
    }
    
    
    
return 0;    
}
