    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int visited[1000001],M[1000001],cnt=0;
    vector < int > V[1000001];
    vector <int> G;
    vector <int>::iterator it;

    void dfsU(int v)
    {
        visited[v]=1;
        int si=V[v].size();
        for(int i=0;i<si;i++)
            if(!visited[V[v][i]])
                dfsU(V[v][i]);
    }
    void dfs()
    {
        for(it=G.begin();it!=G.end();++it)
            if(!visited[*it])
            {
                cnt++;
                dfsU(*it);
            }
    }
    int main()
    {
        int n,u,v;
        cin>>n;
        while(1)
        {
            string s;
            cin>>s;

            //cout<<c<<" ";
            if( s=="C")
            {
                scanf("%d%d",&u,&v);
                if(M[u]==0)
                    G.push_back(u);
                if(M[v]==0)
                    G.push_back(v);
                M[u]=1;M[v]=1;
                V[u].push_back(v);
                V[v].push_back(u);
            }
            else if(s=="Q")
            {
                scanf("%d%d",&u,&v);
                memset(visited,0,sizeof(visited));
                cnt=0;
                dfs();
                cout<<cnt<<endl;
            }
            else
            {
                //cout<<c;
                break;
                return 0;
            }
        }
    return 0;
    }
