    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    vector<int> V[55];
    int color[55];
    int c;
    bool ans=true;
    int main()
    {
        int i,n,m;
        cin>>n>>m;
        int u,v;
        int arr[55]={0};
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            V[u].push_back(v);
            V[v].push_back(u);
            arr[v]=1;
            arr[u]=1;
        }

        queue<int> Q;
        for(i=1;i<=n;i++)
        {
            if(!color[i])
            {
                Q.push(i);
                color[i]=1;
                while(!Q.empty())
                {
                    int x=Q.front();
                    Q.pop();
                    for(i=0;i<V[x].size();i++)
                    {
                        color[V[x][i]]
                    }
                }
            }
        }

        if(ans)
        cout<<"Yes";
        else
            cout<<"No";
       // cin>>i;
    return 0;
    }
