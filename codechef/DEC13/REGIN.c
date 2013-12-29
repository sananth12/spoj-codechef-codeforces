#include<stdio.h>

long long max(long long x, long long y)
{ return (y > x)? y : x; }

int main()
{
   long long t,n,k,i;
   scanf("%d",&t);
   while(t--)
   {
       long long a[100000],sum=0,tmp=0,max_so_far[100000],rev_max_so_far[100000],curr_max,curr_rev_max;
       scanf("%lld%lld",&n,&k);
       for(i=0;i<n;i++)
           scanf("%lld",&a[i]);

      max_so_far[0] = a[0], rev_max_so_far[0]=a[n-1];
      curr_max = a[0],curr_rev_max=a[n-1];
      long long ans=max_so_far[0]+rev_max_so_far[0];
       for(i=1;i<n;i++)
       {

                curr_max = max(a[i], curr_max+a[i]);
                max_so_far[i] = max(max_so_far[i-1], curr_max);

                curr_rev_max=max(a[n-1-i] , curr_rev_max+a[n-1-i]);
                rev_max_so_far[i] = max(rev_max_so_far[i-1] ,curr_rev_max);
       }
       for(i=0;i<n-1-k;i++)
       {
          // printf("%lld ",rev_max_so_far[i]);

           if(max_so_far[i]+rev_max_so_far[n-2-i-k]>ans)
           ans=max_so_far[i]+rev_max_so_far[n-i-k-2];

           //printf("%lld\n",ans);
       }

        printf("%lld\n",ans);
   }
   return 0;
}
