#include<bits/stdc++.h>
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll long long
using namespace std;
vector<int> V[2000002];
int main()
{
   int w=0,n;
   cin>>n;
   int x,y;
   vector < pair<int,int> > M;
   FOR(i,0,n)
    {
        cin>>x>>y;
        M.push_back(make_pair(x,y));
        V[x+1000000].push_back(y);
    }
    if(n<=2)
        {
            cout<<(4-n);
            return 0;
        }
    int ans=2;
    cout<<"~~~";
    FOR(i,0,n)
    {
        FOR(j,i+1,n)
        {
            cout<<i<<"****"<<j<<endl;
            int x1=M[i].first , x2=M[j].first, y1=M[i].second, y2= M[j].second;
            if(x1==x2 && y1==y2)
                continue;
            int X1 = y2-y1+x2, Y1 = x1- x2 + y2;
            int X2 = y2-y1+x1, Y2 = x1- x2- y1;
            int u=1,v=1;
            cout<<"\n"<<X1<<" "<<Y1<<"\n"<<X2<<" "<<Y2<<endl;

            if( find( V[X1].begin(),V[X1].end(),Y1 )!= V[X1].end() )
                u=0;
            if( find(V[X2].begin(),V[X2].end(), Y2 )!= V[X2].end() )
                v=0;
            ans = min(ans,u+v);
            if(ans==0)
                {
                    cout<<"0";
                    return 0;
                }
            X1 = -y2+y1+x2, Y1 = -x1+ x2 + y2;
            X2 = -y2+y1+x1, Y2 = -x1+ x2- y1;
            u=1,v=1;
            if(  find( V[X1].begin(),V[X1].end(),Y1 )!= V[X1].end() )
                u=0;
            if( find(V[X2].begin(),V[X2].end(), Y2 )!= V[X2].end() )
                v=0;
            ans = min(ans,u+v);
            if(ans==0)
                {
                    cout<<"0";
                    return 0;
                }
            X1 = x1+x2+y1-y2, Y1 = y2+y1+x2-x1;
            X2 = x1+x2-y1+y2, Y2 = y2+y1-x2+x1;
            if(X1%2 || X2%2 || Y1%2 || Y2%2)
                {                }
            else
            {
                X1/=2;X2/=2;Y1/=2;Y2/=2;
                u=1,v=1;

              /*  if( find( V[X1].begin(),V[X1].end(),Y1 )!= V[X1].end())
                    u=0;
            /*    if( find(V[X2].begin(),V[X2].end(), Y2 )!= V[X2].end() )
                    v=0;
                ans = min(ans,u+v);
                if(ans==0)
                    {
                        cout<<"0";
                        return 0;
                    }
            */
            }
        }
    }
    cout<<ans;
return 0;
}
