#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t,i,j,n;
   scanf("%d",&t);
   while(t--)
   {
       int ans=0;
        scanf("%d",&n);
        for(i=4;i<=n/2;i++)
        {
            if(n%i==0)
            {
                while(i>3)
                {
                    if(i%10==4 || i%10==7)
                    {
                        ans++;
                        i=0;
                    }
                    i=i/10;
                }
            }
        }
        printf("%d\n",ans);
   }

return 0;
}
