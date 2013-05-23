#include<stdio.h>
#include<stdlib.h>
int input(){
int t=0; char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9')
{t=(t<<3)+(t<<1)+c-'0'; c=getchar_unlocked();}
return t;
}
int main()
{int t,count=0;
int b,h;
double y;
t=input();
while(t--)
{h=input();b=input();
    count=-1;
    y=h;
    while(y>=1)
    {y=y/b; count++;}
    fprintf(stdout,"%d\n",count);
}
return 0;    
} 
