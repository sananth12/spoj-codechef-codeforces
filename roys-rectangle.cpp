    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--){
        int x,y,x1,x2,y1,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        int ans= min( abs(x-x1),min(abs(x-x2),min(abs(y-y1),abs(y-y2))));
        cout<<ans<<endl;
        }
    return 0;
    }
