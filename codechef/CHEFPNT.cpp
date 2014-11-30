#include<bits/stdc++.h>
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll long long
using namespace std;
int main()
{
   int n,m,k;
   cin>>n>>m>>k;
   int a[102][102]={0},b[102][102]={0};
   FOR(i,0,k)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        b[x][y]=1;
    }
    vector <string> V,U;
    int cnt=0;
    vector <string>::iterator it;
   FOR(j,1,m+1){
    FOR(i,1,n+1)
        {
            if(a[i][j]==0)
                cnt++;
        }
    if(cnt>=2*n/3)
    {
        V.push_back("1 "+to_string(j)+" 1");
            FOR(i,1,n+1)
            {
                if(a[i][j]==1)
                    break;
                a[i][j]=1;
            }

    }
   }
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
    FOR(j,1,m+1)
    FOR(i,1,n+1)
        {
            if(b[i][j]==0)
            {
                U.push_back(to_string(i)+" "+to_string(j)+" 1");
                while(i<=n && b[i][j]!=1)
                {
                    b[i][j]=1;
                    i++;
                }
            }
        }
    if(V.size()<U.size()){
    cout<<V.size()<<"\n";
    for(it=V.begin();it!=V.end();++it)
    {
        cout<<*it<<"\n";
    }
    }
    else
    {
         cout<<U.size()<<"\n";
    for(it=U.begin();it!=U.end();++it)
    {
        cout<<*it<<"\n";
    }
    }
return 0;
}
