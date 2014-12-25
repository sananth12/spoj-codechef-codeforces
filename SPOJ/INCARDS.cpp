#include<bits/stdc++.h>
#define ll long long
#define pp pair<ll,ll>
using namespace std;
class Prioritize
{
public:
    ll operator() ( const pair<ll,ll>& p1, const pair<ll,ll>& p2 )
    {
        return p1.second < p2.second;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--){
    priority_queue<pp, vector<pp > , Prioritize > Q,QR;
    ll n;
    cin>>n;
    vector< pp > G[n+1],GR[n+1];
    ll e,u,v,w;
    cin>>e;
    for(ll i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        G[u].push_back(pp(v,w));
        GR[v].push_back(pp(u,w));
    }
    ll s=1;
    ll d[n+1],dr[n+1];
    for(int i=0;i<n+1;i++)
        d[i]=1<<10,dr[i]=1<<10;
    d[s] = 0,dr[s]=0;
    Q.push(pp(s,d[s]));
    QR.push(pp(s,dr[s]));
    while(!Q.empty())
    {
        u = Q.top().first;
        Q.pop();
        ll size = G[u].size();
        for(ll i = 0 ; i < size ; i++)
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
    while(!QR.empty())
    {
        u = QR.top().first;
        QR.pop();
        ll size = GR[u].size();
        for(ll i = 0 ; i < size ; i++)
        {
            v = GR[u][i].first;
            w = GR[u][i].second;
            cout<<dr[v]<<" "<<dr[u]<<" "<<w<<endl;

            if(dr[v] > dr[u] + w)
            {
                dr[v] = dr[u] + w;
                QR.push(pp(v,dr[v]));
            }
        }
    }
    for(ll i=1; i<=n; i++) printf("Node %d, min weight = %d\n", i, d[i]+dr[i]);
    }
    return 0;
}
