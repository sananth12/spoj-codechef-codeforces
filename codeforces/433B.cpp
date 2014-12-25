#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long i,arr[100002]={0};
    long long v[100002]={0};
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        v[i] = v[i-1]+arr[i];

       // cout<<v[i]<<" - ";
    }
    sort(arr+1,arr+n+1);
    for(i=1;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
        //cout<<arr[i]<<" ~ ";
    }
    long long m,l,r,q;
    cin>>m;
    while(m--)
    {
        cin>>q>>l>>r;
        if(q==1)
        {
            cout<<v[r]-v[l-1]<<endl;
        }
        else
            {
                cout<<arr[r]-arr[l-1]<<endl;
               // cout<<" * "<<arr[r]<<" "<<arr[l-1]<<endl;
            }
    }

return 0;
}
