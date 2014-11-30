    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            float n,x,y,P,X,Y,p;
            float d;
            cin>>X>>Y>>P;
            cin>>n>>d;
            int ans=0,i;
            for(i=0;i<n;i++)
            {
                cin>>x>>y>>p;
               // cout<<sqrt(x*x + y*y)<<" ";
                if( sqrt( (X-x)*(X-x) + (Y-y)*(Y-y))<=d && p<=P)
                    ans++;
            }
            t==0?cout<<ans:cout<<ans<<endl;
        }
    return 0;
    }
