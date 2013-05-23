#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
          int n,k,a[200]={0},i,total=0,j,smallsum=0;
          scanf("%d %d",&n,&k);
          for(i=0;i<n;i++)
           {
               scanf("%d",&a[i]);
                total+=a[i];
           }
           int small=((k<=n-k)?k:(n-k));
           for(i=0;i<n;i++)
           {  int temp=0;
              for(j=0;j<n-1;j++)
              {
                 if(a[j]>=a[j+1])
                 {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                 }
              }
           }
           for(i=0;i<small;i++)
            smallsum+=a[i];
           int bigsum=total-smallsum;

           printf("%d\n",(bigsum-smallsum));
    }
return 0;
}
