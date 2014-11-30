#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int ans=0,n,v,r[5000]={0},a,b,i,j,x;
   cin>>n>>v;

   for(i=0;i<n;i++)
   {
       cin>>a>>b;
       r[a]+=b;
   }
   for(i=1;i<=3001;i++)
   {
        x=v;
        if(r[i-1]<x)
            {
                x=x-r[i-1];
                ans+=r[i-1];
                r[i-1]=0;
            }
        else
            {
                ans+=x;
                r[i-1]-=x;
                x=0;
            }
        if(r[i]<x)
            {
                x=x-r[i];
                ans+=r[i];
                r[i]=0;
            }
         else
            {
                ans+=x;
                r[i]-=x;
                x=0;
            }
   }

   cout<<ans;

return 0;
}
