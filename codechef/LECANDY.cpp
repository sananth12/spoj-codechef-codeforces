#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n,c,ans=0,a;
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            c = c-a;
        }
        if(c>=0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
   }

return 0;
}
