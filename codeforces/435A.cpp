#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)
        cin>>a[i];
   int ans=0,cnt=0;
   for(int i=0;i<n;)
    {
        cnt=0;
        while(cnt+a[i]<=m)
        {
            cnt+=a[i];
            i++;
        }
        ans++;
    }
    cout<<ans;
return 0;
}
