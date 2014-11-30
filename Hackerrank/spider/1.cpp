#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        ll n,rem=0,ans=0;
        cin>>n;
        while(n>1)
        {
            ans+= n/2;
            rem= n%2;
            n= (n/2)+rem;
        }
        cout<<ans<<endl;
   }
return 0;
}
