#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {

        string str;
        cin>>str;

        string g1 ("010");
        string g2 ("101");

      size_t found = str.find(g1);
      size_t  found2 =str.find(g2);
      if (found!=std::string::npos || found2!=string::npos)
        cout <<"Good\n" ;
        else
        cout<<"Bad\n";
   }

return 0;
}
