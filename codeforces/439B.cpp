#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   long long n,x;
   cin>>n>>x;
   long long i,ans=0,arr[n];
   for(i=0;i<n;i++)
    cin>>arr[i];

   sort(arr,arr+n);

   for(i=0;i<n;i++)
   {
       ans+= (arr[i]*x);

       if(x!=1)
        x--;
   }

    cout<<ans;
return 0;
}
