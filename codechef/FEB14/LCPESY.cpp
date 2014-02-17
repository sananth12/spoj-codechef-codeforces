#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t,i;
   scanf("%d",&t);
   while(t--)
   {
        string a,b;
        cin>>a>>b;

        int map_a[130]={0},map_b[130]={0};
        for(i=0;i<a.length();i++)
        {
            map_a[ a[i] ]++;
        }

        for(i=0;i<b.length();i++)
        {
            map_b[ b[i] ]++;
        }
        int ans=0;
        for(i=0;i<130;i++)
        {
            if( map_a[i]>0 && map_b[i]>0)
            {
                ans+= min(map_a[i],map_b[i]);
            }
        }

        cout<<ans<<endl;
   }

return 0;
}
