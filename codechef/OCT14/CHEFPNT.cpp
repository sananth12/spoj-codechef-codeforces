#include<bits/stdc++.h>
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll long long
using namespace std;
int main()
{
   int n,m,k;
   cin>>n>>m>>k;
   int a[102][102]={0};
   FOR(i,0,k)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    vector <string> V;
    vector <string>::iterator it;
   FOR(i,1,n+1)
    FOR(j,1,m+1)
        {
            if(a[i][j]==0)
            {
                V.push_back(to_string(i)+" "+to_string(j)+" 0");
                while(j<=m && a[i][j]!=1)
                {
                    a[i][j]=1;
                    j++;
                }
            }
        }
    cout<<V.size()<<"\n";
    for(it=V.begin();it!=V.end();++it)
    {
        cout<<*it<<"\n";
    }

return 0;
}
