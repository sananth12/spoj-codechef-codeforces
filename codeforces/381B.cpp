#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    int map[100000]={0},uni=0,max=a[n-1],cnt=0;
    vector < int > ans,r;
    vector<int>::iterator it;

    for(i=0;i<n;i++)
    {
        map[a[i]]++;
        it = r.begin();

        if(map[a[i]]==1)
              ans.push_back(a[i]);


         if(map[a[i]]==2 && a[i]!=max)
             r.insert(it,a[i]);

    }
    cout<<ans.size()+r.size()<<endl;

    for(it=ans.begin();it!=ans.end();++it)
        cout<<*it<<" ";
    for(it=r.begin();it!=r.end();++it)
        cout<<*it<<" ";

return 0;
}
