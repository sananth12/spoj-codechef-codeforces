#include<bits/stdc++.h>
using namespace std;
int main()
{

        long long n,k;
        cin>>n>>k;
        long long i,a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        long long ans=0;
        long long sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum<=k)
                {
                    ans++;
                }
            else
                break;
        }
        cout<<ans<<endl;


return 0;
}
