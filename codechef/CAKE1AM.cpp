#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2;

        int ans=0;

        ans= (x2-x1) * (y2-y1);

        cin>>x3>>y3>>x4>>y4;

        if (((x1 <= x3 && x3 <= x2) || (x3 <= x1 && x1 <= x4)) &&  ((y1 <= y3 && y3 <= y2) || (y3 <= y1 && y1 <= y4)) )
        {
            int xs[] = {x1, x2, x3, x4};
            int ys[] = {y1, y2, y3, y4};
            sort(xs,xs+4);
            sort(ys,ys+4);

            ans+= ((x4-x3)*(y4-y3))-(xs[2]-xs[1])*(ys[2]-ys[1]);
        }
        else
        {
            ans+= (x4-x3)*(y4-y3);
        }

        cout<<ans<<endl;
   }

return 0;
}
