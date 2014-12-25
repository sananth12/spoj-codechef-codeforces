#include <bits/stdc++.h>
using namespace std;
int main() {
	long long ans=1;
	long long u=0, n, i, k=0;
	cin>>n;
	vector<long long>v;
	long long a[10000];
	map<long long, long long>c;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			v.push_back(a[i]);
			c[abs(a[i])]++;
		}
		else if(a[i]>0 && c[abs(a[i])]>0)
		{
			v.push_back(a[i]);
			u++;
		}
	}
	long long t=0, r;
	for(i=0;i<v.size();i++)
	{
		if(v[i]<0 && (v[i+1]>0 && v[i+1]!=-v[i]))
		t=t+2;
		if(v[i+1]==-v[i])
		k++;
	}
	ans+=u;
	r=u-t-k;
	ans+= (r*t)%1000000007 + (r*k)%1000000007 + (t*k)%1000000007 + (r*t*k)%1000000007;
	ans = ans%1 000000007;
	cout<<ans;
	return 0;
}
