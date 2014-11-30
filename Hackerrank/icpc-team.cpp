#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
    int j,n,m,i;
    cin>>n>>m;
    string tmp;
    int M[n+1][m+1];
    vector < vector < int>  > V(n+1);
    vector < int>  ::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>tmp;
        for(int k=0;k<m;k++)
        {
           if(tmp[k]=='1')
                {
                    M[i][k]=1;
                    V[i].push_back(k);
                }
            else
                M[i][k]=0;
        }
    }
    int ans=0,cnt=0;
    for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
           {
                int tc=V[i].size();

                for(it=V[j].begin();it!=V[j].end();++it)
                {
                    if( M[i][*it]==0)
                        tc++;
                }

                if(tc==ans)
                    cnt++;
                else if(tc>ans)
                {
                    ans=tc;
                    cnt=1;
                }
           }
    cout<<ans<<endl<<cnt;
    return 0;
}
