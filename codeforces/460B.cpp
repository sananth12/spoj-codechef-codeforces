    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll a,b,c,i,x;
        vector <ll> V;
        cin>>a>>b>>c;
        vector <ll>::iterator it;
        for(i=0;i<=81;i++)
        {
            ll K=1;
            for(int j=1;j<=a;j++)
                K*=i;
            x= b*K+c;
            ll sod=0,tmp=x;
            while(tmp)
            {
                sod+=tmp%10;
                tmp/=10;
            }
            if(sod==i)
                {
                    //cout<<"i="<<i<<endl;

                    V.push_back(x);
                }
        }
        sort(V.begin(),V.end());
        cout<<V.size()<<endl;
        for(it=V.begin();it!=V.end();++it)
            cout<<*it<<" ";

        return 0;
    }
