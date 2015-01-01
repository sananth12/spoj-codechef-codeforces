#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   for(int T=1;T<=t;T++)
   {
        long long r;
        cin>>r;
        r=2*r;
        cout<<"Case "<<T<<": "<<(r*r)+0.25<<endl;
   }

return 0;
}
