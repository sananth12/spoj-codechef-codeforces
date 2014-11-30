    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int n,u,v;
        cin>>n;
        vector < pair< int,int> > V;
        vector < pair< int,int> >::iterator it;

        for(int i=0;i<n;i++)
        {
            cin>>u>>v;
            V.push_back( make_pair(u,v) );
        }
        sort(V.begin(),V.end());
        int flag=0;
        for(it=V.begin()+1;it!=V.end();++it)
        {
               //cout<<it->second<<" "<<(it-1)->second<<endl;
                if(it->second < (it-1)->second)
                    flag=1;
        }
        if(flag && n!=1)
            cout<<"Happy Alex";
        else
        cout<<"Poor Alex";

        return 0;
    }
