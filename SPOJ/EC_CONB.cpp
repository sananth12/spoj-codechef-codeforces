#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n;
        cin>>n;
        if(n&1)
            cout<<n<<endl;
        else
        {
            int d=0,tmp=n;
            while(tmp)
            {
                d++;
                tmp>>=1;
            }
            int ans=0;
            int i= d-1;
            while(n)
            {
                ans |= (n&1)<<i;
                n=n>>1;
                i--;
            }
            cout<<ans<<endl;
        }
   }

return 0;
}
