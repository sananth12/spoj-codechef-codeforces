#include<bits/stdc++.h>
#define ll long long
#define FOR(i,j,k) for(ll i=j;i<k;i++)
#define MOD 1000000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,sum=0,e,maxx=0;
        cin>>n>>k;
        ll a[n];
        FOR(i,0,n)
         {
             cin>>a[i];
            sum+=a[i];
            maxx=max(maxx,a[i]);
         }
        e=sum/k;
        if(sum%k || (n<k) || maxx>e)
            cout<<"no\n";
        else
        {
            ll flag=0,hold=0;
            FOR(i,0,(1<<n))
            {
                ll tot=0;
                FOR(j,0,n)
                    if( (1<<j)&i)
                        tot+=a[j];
                if(tot==e && !(hold&i))
                    {
                        flag ++;
                        hold^=i;
                        //cout<<i<<"---\n";
                    }
             //   cout<<tot<<endl;
            }
            if( flag==k || sum==0)
                cout<<"yes\n";
            else
                cout<<"no\n";
        }
    }
    return 0;
}
