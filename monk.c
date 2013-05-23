#include<stdio.h>
int binary(int n)
{
    int c, k=0;
    for ( c = 31 ; c >= 0 ; c-- )
    {
        if ( n>>c & 1 )
            k++;
    }
    return k;
}
int main()
{
   long t;
   scanf("%ld",&t);
   while(t--)
   {
      long long n,cal=0,g;
      long long arr[3]={1},i=1;
      arr[0]=1;
      arr[1]=1;
      arr[2]=1;
      scanf("%lld%lld",&n,&g);
      for(i=2;i<=n;i++)
        {
                       arr[2]=arr[1]+arr[0];
                       arr[0]=arr[1];
                       arr[1]=arr[2];
        }
      if(binary(arr[2]%1000000007)==g)
         printf("CORRECT\n");
      else
       printf("INCORRECT\n");      
   }
return 0;    
}
