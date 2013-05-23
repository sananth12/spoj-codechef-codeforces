#include<stdio.h>
int main()
{  
    int t,sum=0,temp;
    scanf("%d",&t);
    while(t--)
    { 
              scanf("%d",&temp);
              if(temp>0)
              sum+=temp;
    }
    printf("%d",sum);
return 0;    
}
