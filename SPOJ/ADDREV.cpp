    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            string a,b;
            cin>>a>>b;
            ll i,x=0,y=0;
            for(i=a.length()-1;i>=0;i--)
                x = x*10+ (a[i]-'0');

            for(i=b.length()-1;i>=0;i--)
                y  = y*10 + (b[i]-'0');
            //cout<<x<<" "<<y;

            y = y+x;
            ll ans=0;
            while(y>0)
            {
                ans = ans*10 + (y%10);
                y /=10;
            }
            cout<<ans<<endl;
        }
    return 0;
    }
