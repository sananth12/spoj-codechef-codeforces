#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(5-a[i]<k)
            break;
    }
    cout<<i/3;

return 0;
}
