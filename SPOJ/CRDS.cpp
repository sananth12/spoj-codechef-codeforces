    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            ll n,tot;
            cin>>n;
            tot = n*(n+1)/2;
            tot *=3;
            tot -= n;
            tot= tot%1000007;
            cout<<tot<<endl;
        }
    return 0;
    }
