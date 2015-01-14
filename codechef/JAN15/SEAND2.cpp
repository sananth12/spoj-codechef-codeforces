#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++)
            cin>>b[i];
        random_shuffle(a.begin(), a.end());
        cout<<a<<endl;
    }
    return 0;
}
