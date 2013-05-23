#include <stdio.h>
int main() 
{
  int nBounces;
  long t;
  double height,bounceRatio,g,initHeight,cutoff=1;
  scanf("%ld",&t);
while(t--)
{
  
  scanf("%lf%lf",&initHeight,&g);
 
  bounceRatio=1/g;
  cutoff=1.0;
  nBounces=0.0;
  height=initHeight;
  height*=bounceRatio;
  
  if(height>cutoff)
  ++nBounces;
  
  else
  nBounces=0;
   
  while(height>=cutoff)
   {
    height*=bounceRatio;
    ++nBounces;
    }

  printf("%d\n",nBounces);
}
  return 0;
}
    
