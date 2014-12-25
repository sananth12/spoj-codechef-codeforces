#include<bits/stdc++.h>
#define ll long long
using namespace std;
enum colors {BLACK, WHITE, GRAY};
int color[MAX], d[MAX], p[MAX], f[MAX], t, vertex, edge;
int NIL = numeric_limits<int>::min();
void DFS(vector<int> G[]) {
    for(int u=0; u<=vertex; u++) {
        color[u] = WHITE;
        p[u] = NIL;
    }
    t = 0;
    for(int u=1; u<=vertex; u++) {
        if(color[u] == WHITE) {
            DFS_VISIT(G,u);
        }
    }
}

void DFS_VISIT(vector<int> G[], int u) {
    t = t + 1;
    d[u] = t;
    color[u] = GRAY;
    for(int v=0; v<G[u].size(); v++) {
        if(color[G[u][v]] == WHITE) {
            p[G[u][v]] = u;
            DFS_VISIT(G,G[u][v]);
        }
    }
    color[u] = BLACK;
    t = t + 1;
    f[u] = t;
}
int main()
{
   ll u,v,i,n,k,p;
   cin>>n>>k>>p;
   vector<int> adjList[100001];
   vector < pair<int,int> > X;
   vector < pair<int,int> >::iterator it;

   for(i=1;i<=n;i++)
    {
        cin>>u;  // pos on x-axis
        X.push_back(make_pair(u,i));
    }
    sort(X.begin(),X.end());


return 0;
}
