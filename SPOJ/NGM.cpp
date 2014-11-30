#include<bits/stdc++.h>
using namespace std;
int main()
{

  long long n;
  cin>>n;
  if(n%10==0)
    cout<<2;
  else
    {
      cout<<1<<endl<<(n%10);
    }

  return 0;
}
