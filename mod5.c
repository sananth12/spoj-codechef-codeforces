#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int r=t,temp=0,c,d=0,flag=1;
    char n[t];
    scanf("%s",&n[t]);
    t=r;
    while(flag)
    {
        if(n[d]>temp)
            temp=d;
        if(d==t-1&&flag==1)
            {flag=5;d=-2;n[temp]=0;}
        if(d==t-1&&flag==5)
            {temp=n[temp];flag=0;}

        d+=2;

    }
    printf("%d",temp);
    getch();
return 0;
}
