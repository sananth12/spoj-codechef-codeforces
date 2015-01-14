#include <bits/stdc++.h>
#define FOR(i,j,k) for(int i=j;i<k;i++)
#define ll  int
using namespace std;
vector <int> V;
int main()
{
     int q,n=0;
     cin>>q;
     while(q--)
     {
        ll x,y,X,k;
        ll ch;
        scanf("%d", &ch);
        if(ch==0)
        {
            ll tmp;
            n++;
            scanf("%d", &tmp);
            V.push_back(tmp);
        }
        else if(ch==1)
        {
              scanf("%d%d",&x,&y );
              scanf("%d",&X);
              ll maxx=0,index=-1;
              FOR(i,x-1,y)
                if ((X ^V[i])>maxx)
                {
                  maxx=X^V[i];
                  index=i;
                }
              printf("%d\n",V[index]);
        }
        else if(ch==2)
        {
            scanf("%d",&k);
            n-=k;
            V.resize(n);
        }
        else if(ch==3)
        {
            ll ans=0;
            scanf("%d%d",&x,&y );
            scanf("%d",&X);
            FOR(i,x-1,y)
                if (V[i]<=X)
                  ans++;
            printf("%d\n",ans);
        }
        else if(ch==4)
        {
            vector<ll> tmp;
            scanf("%d%d",&x,&y );
            scanf("%d",&k);
            tmp.assign(V.begin()+x-1, V.begin()+y);
            nth_element(tmp.begin(), tmp.begin()+k-1, tmp.end());
            printf("%d\n", tmp[k-1]);
        }
     }
    return 0;
}
