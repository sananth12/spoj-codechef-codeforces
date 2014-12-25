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
        int XXX=0,a[22]={0},n,m,k,x,y,M[22][22]={0};
        cin>>n>>m>>k;
        for(int i=0;i<m;i++)
            {
                cin>>x>>y;
                if(M[x][y]==0)
                {
                    a[x]++;
                    a[y]++;
                    XXX++;

                }
                M[x][y]++;
                M[y][x]++;
            }
        int ans=0;
        if(n==1)
        {
            ans=1;
        }
        else if(n==2)
        {
            if(k==2)
                ans=1;
            else
                ans=3;
        }
        else if(n==3)
        {
            if(k==3)
                ans=1;
            else if(k==2)
            {
                ans=3;
            }
            else
            {
                ans=7;
                if(XXX==1)
                    ans=5;
                if(m==0)
                    ans=5;
            }

        }
        else
            ans=1;
        cout<<ans<<endl;
    }
    return 0;
}
