#include<bits/stdc++.h>
#define ll long long
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define MOD 1000000007
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p[n][2];
        vector < pair< pair< int,int>, int> > v;
        vector < pair< pair< int,int>, int> >::iterator it,jt;
        FOR(i,0,n)
        {
            int x,y;
            cin>>x>>y;
            v.push_back( make_pair( make_pair(x,y),i+1));
        }
        int taken[55555]={0};

        for(it=v.begin();it!=v.end()-1;++it)
        {
            int from=it->second,to;
            if(taken[from])
                continue;
            double d=1000000000,td;
            taken[from]=1;
            for(jt=it+1;jt!=v.end();++jt)
            {
                td = sqrt( pow( (it->first).first - (jt->first).first,2)+ pow( (it->first).second - (jt->first).second,2) );
                if(td<d & !taken[ jt->second])
                {
                    d =td;
                    to = (jt->second);
                }
            }
            cout<<from<<" "<<to<<endl;
        }
    }
    return 0;
}
