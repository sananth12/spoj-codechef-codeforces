#include<bits/stdc++.h>
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll long long
using namespace std;

int main()
{
   ll w=0,n;
   cin>>n;
   map < pair<int,int> , bool > M;
   ll x,y;
   vector < pair<int,int> > V;
   FOR(i,0,n)
    {
        cin>>x>>y;
        M[make_pair(x,y)]=true;
        V.push_back(make_pair(x,y));
    }
    if(n<=2)
        {
            cout<<(4-n);
            return 0;
        }
    int ans=2;
    FOR(i,0,n)
    {
        FOR(j,i+1,n)
        {

            int x1=V[i].first , x2=V[j].first, y1=V[i].second, y2= V[j].second,u,v;
            if(x1==x2 && y1==y2)
                continue;
            int X1,Y1 ;
            int X2,Y2 ;
            X1 = x1+x2+y1-y2, Y1 = y2+y1+x2-x1;
            X2 = x1+x2-y1+y2, Y2 = y2+y1-x2+x1;
            if(X1%2 || X2%2 || Y1%2 || Y2%2)
                {                }
            else
            {
                X1/=2;X2/=2;Y1/=2;Y2/=2;
                u=1,v=1;
                if( M.find(make_pair(X1,Y1))!=M.end() )
                    u=0;
                if( (ans==2) || (ans==1 && u==1))
                    {if( M.find(make_pair(X2,Y2))!=M.end() )
                        v=0;
                    ans = min(ans,u+v);}
                if(ans==0)
                    {
                        cout<<"0";
                        return 0;
                    }
            }
        }
    }
    cout<<ans;
return 0;
}
