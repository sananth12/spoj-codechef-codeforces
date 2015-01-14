#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        int b[n],sum=0,fake=0;
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            sum+=b[i];
            if(b[i]==0)
                fake++;
        }
        if(sum==100)
        {
            cout<<"YES\n";
        }
        else
        {
            if( sum <100 )
            {
                cout<<"NO\n";
            }
            else
            {
                if( (sum-100)< (n-fake))
                    cout<<"YES\n";

                else
                    cout<<"NO\n";
            }
        }
    }
    return 0;
}
