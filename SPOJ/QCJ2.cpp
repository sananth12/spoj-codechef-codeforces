    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll n;
        cin>>n;
        while(n!=0)
        {
            ll ans=1,i; // 2n!/n! N+1!
            for(i=1;i<=n;i++)
                ans= ( ans*(n+i)/i )%761238923;
            ans = ans/i;
            ans = ans%761238923;
            cout<<ans<<endl;

            cin>>n;
        }
    return 0;
    }
