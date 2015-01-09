#include<bits/stdc++.h>
#define ll long long
#define MAX 100002
using namespace std;
int n,a[MAX], res ;
int calc(int pattern)
{
      int cnt = 0;
      for (int i = 1; i <= n; i++)
        if ((pattern & a[i]) == pattern) cnt++;
      return cnt;
}

int main()
{
  int T;
  cin>>T;
  while(T--)
  {    
    res = 0;
    memset(a,0,sizeof(a));
      cin >> n;
      for (int i = 1; i <= n; i++)
	cin >> a[i];

      res = 0;

      for (int bit = 30; bit >= 0; bit--) 
      {
        if (calc(res | (1 << bit)) >= 2)
	  res |= (1 << bit);
      }
      cout << res << endl;
   }
  
  return 0;
} 
