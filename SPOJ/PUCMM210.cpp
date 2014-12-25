    #include<bits/stdc++.h>
    #define ll long long
    #define mod 1000000003
    using namespace std;
    ll pre[1000003],dp[1000003];
    void process()
    {
        ll i;
        pre[1]=1;dp[1]=1;
        for(i=2;i<=1000001;i++)
            pre[i]= ( pre[i-1]+ ( (i*i*i)%mod) )%mod;

        for(i=2;i<=1000001;i++)
            dp[i]= ( pre[i]%mod + dp[i-1]%mod )%mod;
    }
    int main()
    {
        process();
        int t;
        scanf("%d",&t);
        while(t--)
        {
            ll n,i,ans=0;
            cin>>n;
            cout<<dp[n]<<endl;
        }
    return 0;
    }
