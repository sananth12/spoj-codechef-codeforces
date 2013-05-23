/* http://en.wikipedia.org/wiki/Modular_exponentiation */
#include<stdio.h>
int main()
{
    int t,a,b,m=10,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        int result=1;
        while(b>0)
        {
            if(b%2==1){
                result=(result*a)%m;
            }
            b=b>>1;
            a=(a*a)%m;
        }
        printf("%d\n",result);
    }
    return 0;
}
