#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   int n[t+1],s,e,i=0,p=t,sum1=0,sum2=0,temp,j;
   while(i<t)
      {
        scanf("%d",&n[i]);
        i++;
      }
    scanf("%d%d",&s,&e);

   e=e-1;
   s=s-1;
   if(s>e)
   {
       temp=e;
       e=s;
       s=temp;
   }
   if(s==e)
   {
       printf("0");
       return 0;
   }
   i=e;

   while(i<p)
   {
       sum1+=n[i];
       i++;
   }
     if(i==p)
   {
     i=0;
    while(i<s)
   {
       sum1+=n[i];
       i++;
   }
   }
   i=s;
   while(i<e)
   {
       sum2+=n[i];
       i++;
   }
   printf("%d",(sum1<sum2)?sum1:sum2);
return 0;
}
