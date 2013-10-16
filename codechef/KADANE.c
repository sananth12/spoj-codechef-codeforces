#include<stdio.h>

int max(int x, int y)
{ return (y > x)? y : x; }

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0], i;
   int curr_max = a[0];

   for (i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main()
{
   int t,n,i;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
       int a[7005];
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);

       long ans=maxSubArraySum(a,n);
       printf("%ld\n",ans);
   }

   return 0;
}
