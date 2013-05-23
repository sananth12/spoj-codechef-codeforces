#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
 long long a[3],x,i,j;
 scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
  for(i=0;i<2;i++)
   {
    for(j=i+1;j<3;j++)
    {
     if(a[j]<a[i])
     {
       x=a[j];
       a[j]=a[i];
       a[i]=x;
     } 
  
    }
}
a[0]=a[0]%1000000007;
a[1]=(a[1]-1)%1000000007;
a[2]=(a[2]-2)%1000000007;
 printf("%lld\n",((((a[0]*a[1])%1000000007)*a[2])%1000000007));
}

}  
                                  
                                         
