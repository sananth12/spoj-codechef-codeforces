#include<bits/stdc++.h>
#define ll long long
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m1=0,m2=0,flag=0,B=-9999999999;
        cin>>n;
        ll a[n];
        FOR(0,n,1)
            {
                cin>>a[i];
                if(a[i]>=0)
                        m2+=a[i],flag++;
                B=max(B,a[i]);
            }
        if(!flag)
        {
            cout<<B<<" "<<B<<endl;
        }
        else{
        ll msf=a[0],m1=a[0];
        FOR(1,n,1)
        {
            msf = max(msf+a[i],a[i]);
            m1 = max(msf,m1);
        }
        cout<<m1<<" "<<m2<<endl;
        }
    }
    return 0;
}
