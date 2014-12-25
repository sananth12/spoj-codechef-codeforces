    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    vector < int > V[10002];
    int visit[10002];
    int cnt,flag;
    void dfs(int u,int p)
    {
        visit[u]=1;
        cnt++;
      //  cout<<u<<" ";
        for(int i=0;i<V[u].size();i++)
        {
            if(!visit[V[u][i]])
                dfs(V[u][i],u);
            else if(V[u][i]!=p)
                flag=1;
        }
    }
    int main()
    {
        int i,j,n,m,u,v,nodes=0;
        cin>>n>>m;
        int a[10002]={0};
        for(i=0;i<m;i++)
            {
                cin>>u>>v;
                if(a[u]==0)nodes++;
                if(a[v]==0)nodes++;
                a[u]=1,a[v]=1;
                V[u].push_back(v);
                V[v].push_back(u);
            }
        dfs(u,-1);
        if((cnt!=nodes) || flag)
            cout<<"NO";
        else
            cout<<"YES";
    //cin>>i;
    return 0;
    }
