#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        ll n,i,t,l,wait=0,ans=0,T=0;

        cin>>n;
        vector < pair<int,int> > V,G;
        pair< int , int > P;
        vector < pair<int,int> >::iterator it,gt;

        for(i=0;i<n;i++)
        {
            cin>>t>>l;
            V.push_back(make_pair(t,l));
        }
        sort(V.begin(),V.end());
        it=V.begin();

        wait= it->second;

        ans += wait;
        T += ans+ it->first;
        ++it;
        while(it!=V.end())
        {
            if(it->first <= T)
            {
                //cout<<"-";
                G.push_back(make_pair(it->second,it->first));
                ++it;
            }
            else
            {
                if(G.size()>0){
                sort(G.begin(),G.end());
                P=G.front();
                ans += P.first + (T- P.second);
                T+=P.second;
                G.erase(G.begin());
                }
                else
                {
                    T += it->second;
                    //cout<<T<<endl;
                    ans+= it->second;
                    ++it;

                }
            }
        }
        //cout<<ans<<"#";
        sort(G.begin(),G.end());
        while(G.size()>0)
        {
                //cout<<"*";
                P=G.front();
                ans += P.first + (T- P.second);
                //cout<<P.first<<" "<<P.second<<"+";
                T+=P.first;
                G.erase(G.begin());
        }

        cout<<ans/n;

return 0;
}
