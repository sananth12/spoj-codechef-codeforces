#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;
vector<int  > v[50002];
int mark[50004];
int markq[50004];
int pass[50004];

int con=0;
void dfs1(int p)
{
	if(mark[p]) return ;
	mark[p]=1;
	if(pass[p])con++;
	int number=v[p].size();
	for(int i=0;i<number;i++)
	{
		int child =v[p][i];
		if(!mark[child])
			dfs1(child);
	}
}
bool flag =false;
void dfs2(int p)
{
	if(markq[p])	return ;
	markq[p]=1; con++;
	int number=v[p].size();
	for(int i=0;i<number;i++)
	{
		int child=v[p][i];
		if(!markq[child])
		{
			dfs2(child);
			if(pass[child]==1)
				pass[p]=1;
		}
	}
	if(pass[p]==0)
		con--;
}

int main()
{

long long int N,M,nc2=0,count=0; 	int a,b;
cin>>N>>M;
for(int i=1;i<=N;i++)	scanf("%d",&pass[i]);
for(int i=1;i<=M;i++){	scanf("%d%d",&a,&b);	v[a].push_back(b);	v[b].push_back(a);}
for(int i=1;i<=N;i++)
	if(pass[i])
	{
	con=0;
	dfs1(i);
	nc2+=(con)*(con-1)/2;
	}
long long nc=0;
for(int i=1;i<=N;i++)
{
	if(pass[i])
	{
		con=0;
		dfs2(i);
		if(con>1)
		count+=con;
		nc+=(con*(con-1))/2;
	}
}
cout<<nc2<<" "<<count<<endl;
return 0;
}
