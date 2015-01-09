#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      string m,w;
      cin>>m>>w;

      int M[30]={0},W[30]={0};
      bool ans = true;
      for(int i=0;i<m.length();i++)
	M[m[i]-'a']++;
      for(int i=0;i<w.length();i++)
	W[w[i]-'a']++;
      for(int i=0;i<=26;i++)
	if(W[i]!=M[i])
	  {
	    ans=false;
	    break;
	  }
      if(ans)
	cout<<"YES\n";
      else
	cout<<"NO\n";
    }

  return 0;
}
