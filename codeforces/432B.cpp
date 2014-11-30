#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,h,a;
   cin>>n;
   int ha[n][2];
   int i,home[100001]={0};
   for(i=0;i<n;i++)
   {
       cin >> ha[i][0]>>ha[i][1];
       home[ ha[i][0]]++;
   }
   for(i=0;i<n;i++)
   {
      cout<<(n-1+ home[ha[i][1]] )<<" "<<(n-1 -( home[ha[i][1]] ))<<endl;
   }
return 0;
}
