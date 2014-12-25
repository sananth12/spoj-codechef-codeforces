    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t=1;

        while(t--)
        {
            ll i,j,max=0,n;
            cin>>n;
            ll arr[n];
            for(i=0;i<n;i++)
                cin>>arr[i];
            for(i=0;i<n;i++)
                for(j=i+1;j<n;j++)
                {
                        if( (arr[i]&arr[j])>max)
                            max=arr[i]&arr[j];
                }
            cout<<max;

        }
    return 0;
    }
