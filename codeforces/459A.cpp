#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   if(x1==x2)
   {
       cout<<(x1+abs(y1-y2))<<" "<<y1<<" "<<(x2+abs(y1-y2))<<" "<<y2;
   }
   else if(y1==y2)
   {
       cout<<x1<<" "<<(y1+abs(x1-x2))<<" "<<x2<<" "<<(y2+abs(x1-x2));
   }
   else
   {
       if(abs(x1-x2)!=abs(y2-y1))
        cout<<-1;
       else
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
   }

return 0;
}
