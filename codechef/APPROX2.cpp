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
        int k,n;
        cin >> n>>k;
        int i,j;
        int a[n];
        for(i=0;i<n;i++)
            {
                cin>>a[i];
            }

        int cnt=0,mini;
        for(i=0;i<n-1;i++)
            {
                if(i==0)
                    mini=abs(a[i]+a[i+1]-k);

                for(j=i+1;j<n;j++)
                {
                    if( abs(a[i]+a[j]-k)<mini)
                        {
                            mini=abs(a[i]+a[j]-k);
                            cnt=1;
                        }
                    else if( abs(a[i]+a[j]-k)==mini)
                        cnt++;
                }
            }
        cout<<mini<<" "<<cnt<<endl;
   }

return 0;
}
