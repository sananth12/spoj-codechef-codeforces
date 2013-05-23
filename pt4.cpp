#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;
#define N 200010
int n,dp[N];
vector<pair<int,int> > e[N];
int dfs(int u,int pre)
{
	int v,sum=0;
	for(int i=0;i<e[u].size();i++){
		v=e[u][i].first;
		if(v==pre) continue;
		sum+=dfs(v,u)+e[u][i].second;
	}
	dp[u]=sum;
	return dp[u];
}
void DP(int u,int pre)
{
	int v;
	for(int i=0;i<e[u].size();i++){
		v=e[u][i].first;
		if(v==pre) continue;
		dp[v]= dp[u]-e[u][i].second+(e[u][i].second^1);
		DP(v,u);
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
    {
	int x,y;
	cin>>n;
	for(int i=0;i<n-1;i++){
		scanf("%d %d",&x,&y);
		e[x].push_back(make_pair(y,0));
		e[y].push_back(make_pair(x,1));
	}
	dfs(1,0);
	DP(1,0);
	int Min=*min_element(dp+1,dp+n+1);
	cout<<Min<<endl;
	for(int i=1,j=0;i<=n;i++){
		if(dp[i]==Min){
			cout<<(j++?" ":"")<<i;
		}
	}
	cout<<endl;
	for(int yi=0;yi<N;yi++)
	 {e[yi].clear();
	  dp[yi]=0;
	 }
    }
	return 0;
}
