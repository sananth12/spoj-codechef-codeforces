#include<stdio.h>
int main()
{
    long long a[3];
    {   int i,j;
        {
           for(j=0;j<2;j++)
           {
               if(a[j]>=a[j+1])
               {
                 long long temp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=temp;
               }
           }
        }
        if(a[2]*a[2]==(a[0]*a[0])+(a[1]*a[1]))
          printf("right\n");
        else
          printf("wrong\n");

          scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
    }
return 0;
}