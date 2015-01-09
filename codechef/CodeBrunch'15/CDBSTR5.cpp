#include<bits/stdc++.h>
#define ll long long
using namespace std;
int visited[10005],dist[10005];
vector < int > V[10005];
int maxL=0,last=0;
void dfs(int v,int path)
{
  visited[v]=1;
  if(path>maxL)
    {
      maxL=path;
      last=v;
    }
  for(int i=0;i<V[v].size();i++)
    if(!visited[V[v][i]])
      dfs(V[v][i],path+1);
}
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      memset(visited,0,sizeof(visited));
      memset(dist,0,sizeof(dist));
      for(int i=0;i<10005;i++)
	V[i].clear();
      
      int n;
      cin>>n;
      int i,u,v;
      for(i=0;i<n-1;i++)
	{

	  cin>>u>>v;
	  V[u].push_back(v);
	  V[v].push_back(u);
	}
      dfs(1,0);
      int ans;
      ans=maxL;
      memset(visited,0,sizeof(visited));
      dfs(last,0);
      cout<<maxL<<endl;

    }
  return 0;
}
