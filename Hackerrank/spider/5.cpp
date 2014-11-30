#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct Interval
{
    int buy;
    int sell;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll i,n;
        cin>>n;
        ll a[n],maxsofar[n];

        for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
        maxsofar[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(a[i]>maxsofar[i+1])
                 maxsofar[i]=a[i];
            else
                 maxsofar[i]=maxsofar[i+1];
        }
        ll ans=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]<maxsofar[i+1])
                ans+= maxsofar[i+1]-a[i];
        }

        cout<<ans<<endl;

    }
    return 0;
}
