#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
   {
     int i,n,k,p;
     cin>>n>>k>>p;
     int d1,d2,chef[k],boy[p];
     for(i=0;i<k;i++)
	 cin>>d1>>chef[i];

     for(i=0;i<p;i++)
       cin>>d1>>boy[i];
     sort(chef,chef+k);
     sort(boy,boy+p);
     int cc=0,bb=0;
     string ans="Yes\n";
     while(cc<k && bb<p)
       {
         if(chef[cc]==boy[bb])
           {cc++;bb++;}
         else if(chef[cc]<boy[bb])
           cc++;
         else if(chef[cc]>boy[bb])
           {
             ans="No\n";
             break;
           }
       }
     if(bb<p)
       ans="No\n";
     cout<<ans;
   }

}
