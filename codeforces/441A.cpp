#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,k,s,v,i,flag=0,ans[55]={0},pos=0;
   cin>>n>>v;
   for(i=0;i<n;i++)
   {
       cin>>k;
       flag=0;
       for(int j=0;j<k;j++)
       {
           cin>>s;
           if(v>s && flag==0)
           {
               ans[pos]=i+1;
               pos++;
               flag++;
           }
       }
   }
   cout<<pos<<endl;
   for(i=0;i<pos;i++)
        cout<<ans[i]<<" ";

return 0;
}
