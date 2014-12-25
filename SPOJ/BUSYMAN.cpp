#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n,i;
        cin>>n;
        vector < pair < int, int > > V;
        vector < pair < int, int > >::iterator it;
        int s,e;
        for(i=0;i<n;i++)
            {
                cin>>s>>e;
                V.push_back(make_pair(e,s));
            }
        int ans=0;
        sort(V.begin(),V.end());
        it = V.begin();
        i= it->first;
        //cout<<i<<" *";
        ++it;
        ans=1;
        for(;it!=V.end();++it)
        {
            //cout<<it->second<<" *";
            if(it->second >= i)
            {
                    ans++;
                    i= it->first;
            }
        }

        cout<<ans<<endl;
   }

return 0;
}
