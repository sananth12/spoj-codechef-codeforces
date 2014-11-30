#include<bits/stdc++.h>
#define ll long long
using namespace std;
int sq(int x)
{
    return (x*x);
}
int main()
{
    int h,w,r,c,ans=99999999,p,q,x,y;
    cin>>r>>c;
    int i,j,a[r+1][c+1];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>a[i][j];
    cin>>h>>w;
    int bs[h][w];
    for(i=0;i<h;i++)
        for(j=0;j<w;j++)
            cin>>bs[i][j];

    for(i=0;i<=r-h;i++)
        for(j=0;j<=c-w;j++)
        {
            int tmp=0;
            for(p=0;p<h;p++)
                for(q=0;q<w;q++)
                    tmp+= sq(a[i+p][j+q]-bs[p][q]);

            if(tmp<ans)
            {
                ans=tmp;
                x=i+1;
                y=j+1;
            }
        }

    cout<<ans<<endl<<x<<" "<<y;

return 0;
}
