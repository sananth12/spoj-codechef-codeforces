#include<stdlib.h>
#include<stdio.h>
int NumberOfSetBits(int i)
{
    i = i - ((i >> 1) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}
 
int input()
{
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9')
{
t=(t<<3)+(t<<1)+c-'0';
c=getchar_unlocked();
}
return(t);
}
int main()
{
    int t,n,m,m1;
     int i;
     int A[1000000]={0};
    A[0]=1;
    A[1]=2;
    
    for(t=2;t<1000000;t++)
    {
                          A[t]=(A[t-1]%1000000007+A[t-2]%1000000007)%1000000007;
				
    }
    t=input();
    while(t--)
    {
              n=input();
              m=input();
              m1=NumberOfSetBits(A[n-1]);
              if(m1==m)
              puts("CORRECT");
              else
              puts("INCORRECT");
              
    }
    return 0;
} 
