#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,sum=0;
    scanf("%d",&n);
      while(n>0)
      {
        sum+=n%10;
        n/=10;
      }
    if(sum%2==0)
    printf("Oh Not");
    else
    printf("Perfect Odd");

return 0;
}
