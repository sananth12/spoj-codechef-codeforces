#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int j,k,min,i,q,n,arr[51],l,r;
   cin>>n;

   for(i=0;i<n;i++)
        cin>>arr[i];

    cin>>q;

    for(i=0;i<q;i++)
    {
        int k;
        cin>>k;

        int ans=0,pos[51]={0},map[51][51]={0};

        for(j=0;j<n;j++)
        {
            int flag=0,seen=0;
            for(l=j;l<n;l++)
            {
                flag=0;
                seen=0;
                for(r=j;r<=l;r++)
                {
                    if(arr[r]<k)
                        {flag=1;break;}
                    if(arr[r]==k)
                        seen++;
                }

                if(flag==0 && seen)
                {
                    if(map[j][l]==0)
                    {
                        map[j][l]++;
                        ans++;
                    }
                }
            }
        }

        cout<<ans<<endl;

    }


return 0;
}
