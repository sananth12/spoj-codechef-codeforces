#include<stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d%f",&x,&y);   
    
    if(x>=(y-0.5)||(x%5)!=0)
    printf("%0.2f",y);
       
    else
    {float h=x;
      printf("%0.2f",(y-h-0.5));    
           
    }
    
   return 0;
}
