#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n;
   cin>>n;
   ll a[n],i,max=-1,min=INT_MAX,max_cnt=0,min_cnt=0;
    for(i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]>max)
            max=a[i],max_cnt=1;
         else if(a[i]==max)
            max_cnt++;

         if(a[i]<min)
            min=a[i],min_cnt=1;
         else if(a[i]==min)
            min_cnt++;
     }
     //cout<<max<< " " <<min<<endl;
     if(max==min)
        cout<<"0 "<<(ll)( (min_cnt-1)*(min_cnt)/2 );
    else
     cout<<max-min<<" "<<(ll)(min_cnt*max_cnt);

return 0;
}
