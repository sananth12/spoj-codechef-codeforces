#include<stdio.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    { 
              long n,i=0,c1=0,c2=0,c3=0,temp;
              scanf("%ld",&n);
              for(i=0;i<n;i++)
              {
                           scanf("%ld",&temp);
                             
                             if(temp==1)
                             c1++;
                             if(temp==2)
                             c2++;
                             if(temp==3)
                             c3++;
              }
              c1>c2?(c1>c3?printf("%ld\n",n-c1):printf("%ld\n",n-c3)):(c2>c3?printf("%ld\n",n-c2):printf("%ld\n",n-c3));
    }
    
}
