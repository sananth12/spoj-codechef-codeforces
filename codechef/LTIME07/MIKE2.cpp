#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

long long top(long long x)
{
    if(x%2==0)
     return x/2;
     else
      return x/2 ;
}

int main()
{
   long long i,n,x,fail=0,pass=0;
    //cout<<top(5);
   cin>>n>>x;
   long long arr[n+1];
   for(i=0;i<n;i++)
    cin>>arr[i];
   sort(arr,arr+n);

   long long sum=0;
    fail=n;
    for(i=0;i<n;i++)
    {
        if( sum + top(arr[i]) <=x)
            {
                sum += top(arr[i]);
                fail--;
                arr[i]=arr[i]- top(arr[i]);
            }
        else
            break;
    }

    for(i=0;i<n;i++)
    {
        if( sum+arr[i]<=x )
            {
                sum+=arr[i];
                pass++;
            }
    }

    cout<<fail<<" "<<pass;

return 0;
}
