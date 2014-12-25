#include<bits/stdc++.h>
#define FOR(l,j,k) for(int i=l;i<j;i+=k)
#define MOD 1000000007
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,a[22]={0},M[22][22]={0},XXX=0;
        cin>>n>>m;
        for(int i=0;i<m;i++)
            {
                cin>>x>>y;
                if(!M[x][y] && !M[y][x])
                {
                    a[x]++;
                    a[y]++;
                    XXX++;
                }
                M[x][y]++;
                M[y][x]++;
            }
        if(XXX>2)
            cout<<"NO\n";
        else if(XXX<2)
            cout<<"YES\n";
        else
        {
            bool flag= false;
            if(XXX==2)
            {

                FOR(1,n+1,1)
                {
                    if(a[i]==2)
                        flag=true;
                }
            }
                if(flag)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";

        }
    }
    return 0;
}
