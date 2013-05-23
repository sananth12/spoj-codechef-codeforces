#include<cstdio>
#include<vector>
using namespace std;
typedef vector<int> VI;

vector<VI> a;
VI mark;
int cnt;

void dfs(int u)
{
    ++cnt;
    mark[u]=1;
    for(VI::iterator v=a[u].begin();v!=a[u].end();++v)
    {
        if(!mark[*v])
        {
            dfs(*v);
        }
    }
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int N, M;
		scanf("%d%d", &N, &M);
		a=vector<VI> (N);
		for(int i=0;i<M;++i)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            --u;
            --v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        int res=0,ways=1;
        mark=VI(N,0);
        for(int u=0;u<N;u++)
        {
            if(mark[u])
            {
				continue;
			}

			++res;
			cnt=0;
			dfs(u);
			ways = (long long)cnt * ways % 1000000007;

        }
        printf("%d %d\n", res, ways);

    }
    return 0;
}
