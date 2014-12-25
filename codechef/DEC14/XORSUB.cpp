#include<bits/stdc++.h>
#define ll long long
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define MOD 1000000007
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n],bit[3000]={0},ans=k;
        FOR(i,0,n)
            cin>>a[i];
        FOR(i,0,n)
        {
            FOR(j,0,3000)
            if(bit[j])
                bit[ a[i]^j ]=1;
            bit[a[i]]=1;
        }
        FOR(i,0,3000)
            if(bit[i] && (i^k)>ans)
                ans = i^k;
        cout<<ans<<endl;
    }
    return 0;
}
