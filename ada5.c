#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int r=t,temp=0,c,d=0;
    int n[t];
    t--;
    goto label;

    label:
    scanf("%d",&n[t]);
    t--;
    if(t>=0)
        goto label;

    t=r;
    r--;
    goto l;
    l:
        if(n[r]>=temp)
        {temp=n[r];d=r;}
     r--;
    if(r>=0)
            goto l;
    n[d]=0;
    temp=0;
    while(t--)
        if(n[t]>=temp)
        {temp=n[t];}
    printf("%d",temp);
return 0;
}
