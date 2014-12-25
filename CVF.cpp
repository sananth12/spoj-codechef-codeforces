    #include<bits/stdc++.h>
    #define ll long long
    #define MOD 1000000007
    using namespace std;

    ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
    }
    int a[4000][4000];
    int main()
    {
        ll n,i,m,j,ans=1;
        cin>>n;

        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            cin>>a[i][j];
        cin>>m;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                {
                    ans = ans*fast_exp(a[i][j],m) %MOD;
                }
        cout<<ans;

    return 0;
    }
