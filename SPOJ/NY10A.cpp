#include <bits/stdc++.h>
using namespace std;
int main() {

	int t,n;
	cin>>t;
	while(t--)
	{

		cin>>n;
		string s,a[]={"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT","HHH"};
		cin>>s;
		int ans[10]={0},j,i;

		for(i=0;i<8;i++)
		{
			for(j=0;j<s.length()-2;j++)
				if(s[j]==a[i][0] && s[j+1]==a[i][1] && s[j+2]==a[i][2] )
					ans[i]++;
		}
		cout<<n<<" ";

		for(i=0;i<8;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}

	return 0;
}
