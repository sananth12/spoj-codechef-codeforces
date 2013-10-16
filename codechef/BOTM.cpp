#include<stdio.h>
#include<stdlib.h>
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
        int sum=0,i,n,a[100005];
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int mid=a[n/2];
        for(i=0;i<n;i++)
        {
           sum+=(abs(mid-a[i]));
        }
        cout<<sum<<"\n";
   }
return 0;
}
