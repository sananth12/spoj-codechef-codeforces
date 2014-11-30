#include<stdio.h>
#include<stdlib.h>
#define LL long long
inline void S(LL *);
inline void S(LL *a)
{
char c = 0;
while(c<33)
//c = fgetc_unlocked(stdin);
c = getc(stdin);
*a = 0;
while(c>33)
{
*a = *a*10 + c - '0';
//c = fgetc_unlocked(stdin);
c = getc(stdin);
}
}
int main()
{
LL t,n,m,p[10],sum,flag ,i,temp,j;
S(&t);
while(t--)
{
    S(&n);
    S(&m);
    sum=0;
    flag=1;
    for(i=0;i<n;i++)
    {
        S(&p[i]);
    }
 for(i=0;i<n;i++)
    for(j=i;j<n;j++)
 {
     if(p[i]<p[j])
     {
         temp=p[i];
         p[i]=p[j];
         p[j]=temp;
     }
 }
for(i=0;i<n;i++)
{
    //printf("%lld\n",p[i]);
    sum=sum+p[i];
   // printf("sum=%d\n",sum);
    if(sum>=m)
    {
        flag=0;
        break;
    }
}
if(flag==0)
    printf("%lld\n",i+1);
else
    printf("-1\n");

}
return 0;
}
