#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int i,k,n,arr[105];
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        k=arr[k-1];
        sort(arr,arr+n);
        for(i=0;i<n;i++)
            if(arr[i]==k)
                {
                    cout<<i+1<<"\n";
                    break;
                }
   }
return 0;
}
