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
   int n=1;
   scanf("%d",&n);
   while(n!=0)
   {
   int i,a[250005];
   //scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);


   int max_sum = maxSubArraySum(a, n);
   printf("%d\n", max_sum);
   scanf("%d",&n);
   }
   return 0;
}
