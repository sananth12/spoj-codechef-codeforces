#include<stdio.h>
int main()
{
    int n,b,p=0,w=1,k=w;
    scanf("%d%d",&n,&b);
    t:
       {
           k*=b;
           }
           if(k<=n)
            {
                p+=w;
                goto t;
                }
    printf("%d",p);
return 0;
}
