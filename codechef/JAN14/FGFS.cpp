#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdio>
#define FOR(it,vec) for( __typeof((vec).begin()) it = (vec).begin(); it != (vec).end(); ++it )
using namespace std;
vector < pair<int,pair<int,int> > > vec;
int main()
{
	int l,m,t;
	cin>>t;
	while(t--)
	{
	    int n,k,maximum=0;
		cin>>n>>k;
        vec.clear();
		int i,j,s,f;
		for(i=0;i<n;i++)
		{
			//cin>>s>>f>>j;
			scanf("%d%d%d",&s,&f,&j);
			vec.push_back(make_pair(j,make_pair(s,f)));
		}
		sort(vec.begin(),vec.end());
		FOR( it , vec )
        {
			j= it->first;
            f=it->second.second;
			maximum++;
			while( it+1 != (vec).end()  &&  j == (it+1)->first)
			{
				if((it+1)->second.first>=f)
                {
					maximum++;
					f=(it+1)->second.second;
				}
				else if((it+1)->second.second<f)
					f=(it+1)->second.second;

				++it;
			}
		}
		cout<<maximum<<endl;
	}
	return 0;
}
