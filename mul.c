#include<stdio.h>
int main()
{
   int a[50]={-1},b[50]={-1},c[50]={-1},rem=0,sum=0;
   long long A,B,i=0,j,temp=0,mul=0;
   
   scanf("%lld%lld",&A,&B);
   while(A!=0)
   {
       a[i]=A%10;
       A=A/10; 
       i++;          
   }
   i=0;
   while(B!=0)
   {
       b[i]=B%10;
       B=B/10;           
       i++;
   }
   for(i=0;a[i]!=-1;i++)
   {   
       rem=0;
       temp=0;
       
       for(j=0;b[j]!=-1;j++)
       {
               mul=a[i]*b[j];
               temp=mul+rem;
               rem=temp/10;
               c[j]=;
                                 
       }  
       c[++j]=                   
   }
   
   //for(i=0;c[i]!=-1;i++)
   //{
        printf("%d",);     
   //}
   
getch();
}   
   
   



