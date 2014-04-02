#include<stdio.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define m 1000000
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   vector <int> map(1000001);
   vector <bool> there(1000001);
   while(t--)
   {
        long long tmp,i,n,a,b,c,d;
        long long j=1,x=0,y=0,count=0;
        scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
        tmp=d;

        map[tmp]++;
        there[tmp]=true;
        for(i=1;i<n;i++)
        {
             tmp=((tmp*tmp)*a+(b*tmp)+c)%m;
             map[tmp]++;
             there[tmp]=true;
        }
        for(i=m-1;i>=0;i--)
        {
            if(there[i]==true)
            {
                if(count%2)
                {
                    y+=(map[i]/2+map[i]%2)*i ;
                    x+=((map[i]-1)/2+(map[i]+1)%2)*i ;
                }
                else
                {
                    x+=(map[i]/2+map[i]%2)*i ;
                    y+=((map[i]-1)/2+(map[i]+1)%2)*i ;
                }
            }
            count+=map[i];
        }
       printf("%lld\n",abs(x-y));
       fill(map.begin(), map.end(), 0);
       fill(there.begin(), there.end(), false);
   }

return 0;
}
