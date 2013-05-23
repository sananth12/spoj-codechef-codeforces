#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,s=0,m=0,y=10,r=2;
    scanf("%d",&n);
    f:
    {
        s=m;
      x:
      {
        int k=n%y;
        if(k%r!=m)
        s+=k;

        n/=y;
      }
      if(n>m)
        goto x;
      n=s;
    }
    if(s>y)
        goto f;

    if(s%r==m)
    printf("Oh Not");
    else
    printf("Perfect Odd");

return m;
}
