#include<stdio.h>
int main()
{
    long long n[100500]={0},d[100500]={0},big=0;
    int p,i,j;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
           {scanf("%lld",&n[i]);
            d[i]=i; 
           }    
    for(i=1;i<=p;i++)
      for(j=1;j<=p-i;j++)
       if(n[j]>n[j+1])
          {    
               big=n[j+1];
               n[j+1]=n[j];
               n[j]=big;
               big=d[j+1];
               d[j+1]=d[j];
               d[j]=big;
          }
     for(i=1;i<=p;i+=2)
     printf("%lld\n",d[i]); 
     
getch();
return 0;     
}
