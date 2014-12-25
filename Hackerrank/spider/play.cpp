#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ans=0;
void solve(int s[],int p,int k,int t[],int a[],int w,int q=0,int r=0)
{
    if(q==k)
    {
        int sum=0;
        for(int i=0;i<k;i++)
           sum+=a[t[i]];

        if(sum==w)
            ans++;
    }
    else
    {
        for(int i=r;i<p;i++)
        {
            t[q]=s[i];
            solve(s,p,k,t,a,w,q+1,i+1);
        }
    }
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n,m,w;
        cin>>n>>m>>w;
        ans=0;
        int g[16][16]={0},cnt[16]={0};
        int i,a[n],p,q;
        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<m;i++)
        {
            cin>>p>>q;
            g[p][p]=1;
            g[q][q]=1;
            g[p][q]=1;
            g[q][p]=1;
            cnt[q]++;
            cnt[p]++;
        }
        //cout<<"!";

        for(i=0;i<16;i++)
        {
          int T[ 16 ],pos=0;
          for(int j=0;j<16;j++)
            {
                if(g[i][j]==1)
                    {
                        T[pos]=j;
                        pos++;
                    }
            }
            if(pos==0)
                continue;
            cout<<i<<":\n";
           for(int j=0;j<cnt[i];j++)
           {
               //int d[16];
               //solve(T,cnt[i],j,d,a,w);
               cout<<T[j]<<" ";
           }
           cout<<endl;
        }
        cout<<ans<<endl;
   }

return 0;
}
