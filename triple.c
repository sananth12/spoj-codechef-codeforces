#include<stdio.h>
int main()
{
    long long arr[3],temp=0;
    int n;
    scanf("%d",&n);
    while(n--)
   {          
              int i=0,j=0;
           scanf("%lld %lld %lld",&arr[1],&arr[2],&arr[0]);
           
           for(i=0;i<2;i++)
   {
    for(j=i+1;j<3;j++)
    {
     if(arr[j]<arr[i])
     {
       temp=arr[j];
       arr[j]=arr[i];
       arr[i]=temp;
     } 
  
    }
}
   
   //printf("%lld\n",((arr[0])*(arr[1]-1)*(arr[2]-2))%1000000007);
arr[0]=arr[0]%1000000007;
arr[1]=(arr[1]-1)%1000000007;
arr[2]=(arr[2]-2)%1000000007;
 printf("%lld\n",((((arr[0]*arr[1]))*arr[2])));

   }
    
}
