    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int common[55];
    int visited[55];
    vector <int> V[55];
    void dfs(int v)
    {
            common[v]++;
            visited[v]=1;
            int Size=V[v].size();
            for(int i=0;i<Size;i++)
                if(!visited[ V[v][i]])
                    dfs(V[v][i]);
    }
    int main()
    {
        int n,m;
        cin>>n>>m;
        int depend[55]={0};
        int i,u,v;
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            V[u].push_back(v);
            V[v].push_back(u);
        }
        int Q;
        cin>>Q;
        for(i=0;i<Q;i++)
        {
            memset(visited,0,sizeof(visited));
            cin>>v;
            depend[v]=1;
            dfs(v);
        }
        bool first=true;
        vector <int> ans;
        vector <int>::iterator it;
        for(i=1;i<=n;i++)
        {

            if(!depend[i] && common[i]==Q)
                {
                    ans.push_back(i);
                }
            //cout<<common[i]<<" ";
        }
        int Size=ans.size();
        if(Size==0)
            cout<<-1;
        else
        {
             int x=0;
            for(it=ans.begin();it!=ans.end();++it,x++)
            {
                if(x==Size-1)
                    cout<<*it;
                else
                    cout<<*it<<" ";

            }
        }

    //cin>>i;
    return 0;
    }
