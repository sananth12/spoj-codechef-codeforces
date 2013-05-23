#include<stdio.h>
int main()
{

    int i=0,b=i,B=i,n,k=i,t;
    scanf("%d",&t);
    g:
    {     scanf("%d",&n);
       if(n>=b)
       {           B=b;
                   b=n;
       }
       else if(n>=B)
           B=n;
       i+=1;
    }
    if(i<t)
        goto g;
    printf("%d",B);
return k;
}
