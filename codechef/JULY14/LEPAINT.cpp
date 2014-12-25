#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        double exp=0;
        int n,c,k,i,j,l,r,C;

        cin>>n>>c>>k;
        double ans[n+5][k+5][c+5];

        for(i=0;i<=n;i++)
            for(j=0;j<=k;j++)
                for(int y=0;y<=c;y++)
                    ans[i][j][y]=0;

        for(i=0;i<=n;i++)
            ans[i][0][1]=1;
        for(i=1;i<=k;i++)
        {
            cin>>l>>r;

            for(j=1;j<=n;j++)
            {
                if(j>=l && j<=r)
                    {}
                else
                {
                    for(C=0;C<c;C++)
                        ans[j][i][C]=ans[j][i-1][C];
                }
            }

            for(j=l;j<=r;j++)
                for(C=0;C<c;C++)
                    ans[j][i][C]=ans[j][i-1][C]/2;

            for(j=l;j<=r;j++)
                for(C=0;C<c;C++)
                {
                        for(int CC=0;CC<c;CC++)
                            ans[j][i][(C*CC)%c] += (ans[j][i-1][C]/(c*2));
                }
        }

        for(j=1;j<=n;j++)
            for(C=0;C<c;C++)
                exp+=C*ans[j][k][C];

       printf("%.9lf\n",exp);
   }

return 0;
}
