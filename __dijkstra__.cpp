#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#define pp pair<int,int>
using namespace std;
class Prioritize
{
public:
    int operator() ( const pair<int, int>& p1, const pair<int, int>& p2 )
    {
        return p1.second < p2.second;
    }
};
int main()
{
    priority_queue<pp, vector<pp > , Prioritize > Q;
    int n;
    cin>>n;
    vector< pp > G[n+1];
    int e,u,v,w;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        G[u].push_back(pp(v,w));
        G[v].push_back(pp(u,w));
    }
    int s;
    cin>>s;
    int d[n+1];
    for(int i=1;i<=n;i++)
    {
        d[i] = 999;
    }
    d[s] = 0;
    Q.push(pp(s,d[s]));
    while(!Q.empty())
    {
        u = Q.top().first;
        Q.pop();
        int size = G[u].size();
        for(int i = 0 ; i < size ; i++)
        {
            v = G[u][i].first;
            w = G[u][i].second;
            cout<<u<<" "<<v<<" "<<w<<endl;
            if(d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                Q.push(pp(v,d[v]));
            }
        }
    }
    for(int i=1; i<=n; i++) printf("Node %d, min weight = %d\n", i, d[i]);
    return 0;
}
