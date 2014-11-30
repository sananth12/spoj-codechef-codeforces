    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int n;
            cin>>n;
            int i,m[n+1],h[n+1];

            for(i=0;i<n;i++)
                cin>>m[i];

            for(i=0;i<n;i++)
                cin>>h[i];

            sort(m,m+n);
            sort(h,h+n);
            int ans=0;

            for(i=0;i<n;i++)
                ans=max(ans,abs(h[i]-m[i]));

            cout<<ans<<endl;
        }
    return 0;
    }
