#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n,m,d;
        cin>>n>>m>>d;
        int i,h[n];
        for(i=0;i<n;i++)
            cin>>h[i];
        sort(h,h+n);
        i=0;
        int total=0;
        for(int j=0;j<m && i<n;)
        {
            while(h[i]-d>0 && j<m && i<n)
            {
                h[i]-=d;
                j++;
                total+=d;
            }
            if(h[i]<=d)
                i++;
        }
        //cout<<total;
        if(total< m*d)
            cout<<"NO\n";
        else
            cout<<"YES\n";
   }

return 0;
}
