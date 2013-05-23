#include<stdio.h>
int main()
{int t,count=0;
int b,h;
double y;
scanf("%d",&t);
while(t--)
{         scanf("%d%d",&h,&b);
    count=-1;
    y=h;
    while(y>=1)
    {y=y/b; count++;}
    printf("%d\n",count);
}
return 0;    
} 
