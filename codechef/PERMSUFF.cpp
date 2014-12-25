    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        int color[100004];
        while(t--)
        {
            memset(color,0,sizeof(color));

            int i,n,m;
            cin>>n>>m;
            int a[n+1];
            vector < pair<int,int> > V;
            vector < pair<int,int> >::iterator it;

            for(i=1;i<=n;i++)
                cin>>a[i];
            int c=1;
            for(i=1;i<=m;i++)
            {
                int l,r;
                cin>>l>>r;

                for(it=V.begin();it!=V.end();++it)
                {
                    if( l >= it->first && l<= it->second)
                    {
                        if( r> it->second)
                        {
                           l = it->first;
                          // it->first=0;
                          // it->second=0;
                           V.erase(it);
                        }
                    }
                    else if(r >= it->first && r<= it->second)
                    {
                        if( l > it->first )
                        {
                            r = it->second;
                            V.erase(it);
                          // it->first=0;
                          // it->second=0;
                        }
                    }
                }
                V.push_back(make_pair(l,r));
            }
            c=1;
            for(it=V.begin();it!=V.end();++it)
            {
                for(int j=it->first;j<=it->second;j++)
                    color[j]=c;
                c++;
            }

            bool ans=true;

            for(i=1;i<=n;i++)
            {
               // cout<<color[i]<<"-";
                if( color[i]!=color[a[i]] || (color[i]==0 && i!=a[i]))
                {
                    ans=false;
                    break;
                }
            }

            if(ans)
                cout<<"Possible\n";
            else
                cout<<"Impossible\n";
        }
    return 0;
    }
