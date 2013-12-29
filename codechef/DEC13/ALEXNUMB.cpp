#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   long long t,n,i,dumb;
   cin>>t;
   while(t--)
   {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>dumb;
        cout<<n*(n-1)/2<<endl;
    }

return 0;
}
