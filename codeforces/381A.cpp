#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   scanf("%d",&n);
   int i,arr[n];

   for(i=0;i<n;i++)
    cin>>arr[i];

   int s=0,d=0,l=0,r=n-1;
   while(l<=r)
   {
       if(arr[l]>arr[r])
        {
            s+=arr[l];
            l++;
        }
       else
       {
           s+=arr[r];
           r--;
       }

       if(l>r)
            break;

       if(arr[l]>arr[r])
        {
            d+=arr[l];
            l++;
        }
       else
       {
           d+=arr[r];
           r--;
       }
   }

   cout<<s<<" "<<d;

return 0;
}
