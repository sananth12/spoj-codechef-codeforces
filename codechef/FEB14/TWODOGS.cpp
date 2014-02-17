#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include <map>
#include <utility>

using namespace std;
int main()
{
   int n,k,t,i,ans=0,flag=0;

   cin>>n>>k;

   int arr[n+1];

   map< int,int > a;

   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   int l=0,r=n-1;

   while(l<r)
   {
       if ( a.find(k-arr[l]) == a.end() ) {
            // not found
        }
        else if(k-arr[l]!=arr[l]){

        cout<<l+1;
        return 0;
        }

        if ( a.find(k-arr[r]) == a.end() ) {
            // not found
        }
        else if(k-arr[r]!=arr[r]){
        cout<<l+1;
        return 0;
        }

        if( arr[l]+arr[r]==k && arr[l]!=arr[r])
        {
             cout<<l+1;
             return 0;
        }

       a[ arr[l] ]++;
       a[ arr[r] ]++;

       l++;
       r--;
   }

   if(n%2==1)
   {
        if ( a.find(k-arr[l]) == a.end() ) {
            // not found
        }
        else if(k-arr[l]!=arr[l]){

        cout<<l+1;
        return 0;
        }
   }

    cout<<-1;
return 0;
}
