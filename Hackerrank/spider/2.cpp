#include<bits/stdc++.h>
using namespace std;
inline bool IsPrime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  return (false);

 for( int k = 1; 36*k*k-12*k < number;++k)
  if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   return (false);
  return true;
 }

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n;
        cin>>n;
        if(IsPrime(n) || n==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
   }

return 0;
}
