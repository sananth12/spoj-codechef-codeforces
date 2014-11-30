#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll i,j,n,bucket[2049]={0},ans=0;
    string s;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>s;
		ll tmp = 0;
		for (int j=0;j<s.length();j++)
			tmp=tmp|(1 << (s[j] - '0'));
		bucket[tmp]++;
	}
	for (i=0;i<=2048;i++)
		ans += bucket[i]*(bucket[i]-1);
	for (i =0;i<=2048; i++)
		for ( j=0;j<=2048; j++)
			if ((i & j)!=0)
                if(i!=j)
                    ans+=bucket[i]*bucket[j];
    ans=ans/2;
	cout<<ans<<endl;
    }
	return 0;
}
