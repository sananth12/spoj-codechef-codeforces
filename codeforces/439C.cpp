#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,k,p;
   cin>>n>>k>>p;
   int i,odd[n],even[n],tmp,ot=0,et=0,j;
   vector< vector< int > > vec(k+1);
   vector< int >::iterator it;
   for(i=0;i<n;i++)
   {
       cin>>tmp;
       if(tmp%2==0)
        {
            even[et]=tmp;
            et++;
        }
        else
        {
            odd[ot]=tmp;
            ot++;
        }
   }
   for(i=0;i<p;i++)
   {
       et--;
       if(et>=0)
       vec[i].push_back(even[et]);

       else
       break;
   }
   if(i<p)
   {
       //cout<<"~";
       for(j=i;j<p;j++)
       {
           ot--;
           if(ot>=0)
           {
               vec[j].push_back(odd[ot]);
           }
           ot--;
           if(ot>=0)
           {
               vec[j].push_back(odd[ot]);

           }
           else
            break;
       }
       if(j!=p)
       {
           cout<<"NO";
            return 0;
       }
   }
   for(i=p;i<k;i++)
   {
       //cout<<"*";
       ot--;
       if(ot>=0)
       vec[i].push_back(odd[ot]);

       else
       break;
   }
   if(i!=k)
   {
           cout<<"NO";
            return 0;
   }
   if(ot%2==1)
    {
           cout<<"NO";
            return 0;
   }
   else
   {
      // cout<<"!";
       for(i=0;i<et;i++)
       {
           vec[0].push_back(even[i]);
       }
       for(i=0;i<ot;i++)
       {
           vec[0].push_back(odd[i]);
       }

   }
   cout<<"YES\n";
   for(i=0;i<k;i++)
   {
       cout<<vec[i].size()<<" ";
       for(it=vec[i].begin();it!=vec[i].end();++it)
       {
           cout<<*it<<" ";
       }
       cout<<endl;
   }

return 0;
}
