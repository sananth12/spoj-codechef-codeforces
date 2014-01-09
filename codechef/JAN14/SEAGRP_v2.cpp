#include<string.h>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int graph[111][111];
int visit[111];
int solve(int,int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,m,x,y;
		cin>>n>>m;
		memset(visit,0,111*sizeof(int));
		memset(graph, 0, sizeof(graph[0][0]) * 111 * 111);

		for(i=0;i<m;i++)
		{
			cin>>x>>y;
			graph[x][y]=1,graph[y][x]=1;
		}
		if(solve(n,n) && n%2==0)
            cout<<"YES\n";
		else
            cout<<"NO\n";
	}
	return 0;
}
int solve(int n,int marked)
{
    int i=0,j=0,k=0;

	if(marked==0)
        return 1;

	for(i=1;i<=n;i++)
		if(!visit[i])
		{
			for(j=1;j<=n;j++)
				if(graph[i][j]==1 && visit[j]==0)
				{
					visit[i]=1,visit[j]=1;

					if(solve(n,marked-2))
                        return true;
					else
					visit[i]=0,visit[j]=0;
				}

			if(n<j)
                return 0;
		}

	return 0;
}
