#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        double a,b,x,n;
        cin>>a>>b>>x;
        n=pow(a,b);
        ll u,v;
        u=x*((ll)(n/x) + 1);
        v=x*(ll)(n/x);
        if(abs(n-u)<abs(n-v))
            cout<<u<<endl;
        if(abs(n-u)>abs(n-v))
        cout<<v<<endl;
        if(abs(n-u)==abs(n-v))
        cout<<min(u,v)<<endl;
        }
return 0;
}
