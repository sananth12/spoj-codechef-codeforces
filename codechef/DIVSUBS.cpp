#include<stdio.h>
#include<map>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        map<int,int> M;
        vector < vector <int> > V(10005);
        vector < int >::iterator vit;
        map<int,int>::iterator it,it2;
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(M.find(a[i])==M.end())
            V[a[i]].push_back(i+1);
           // cout<<"**"<<i<<"**\n";
             if( a[i] % n ==0 )
                    {
                        cout<<"1\n"<<i+1;
                        flag=1;
                        break;
                    }
            int tit2=M.size();
            j=0;
            for ( it=M.begin(); it!=M.end(); ++it)
                {
                    if(j==tit2)
                        break;
                    j++;

                    //cout<<"@";
                    int added = (it->first)+a[i];
                 //   cout<<"-- "<<added<<"-- ";
                    if(M.find(added)==M.end())
                    {
                    M[ added ] =1;
                    V[ added ].insert( V[added].end(),V[it->first].begin(), V[it->first].end() );

                    V[added ].push_back(i+1);
                   // for(vit=V[(added)].begin();vit!=V[(added)].end();++vit)
                    //    cout<<*vit;
                   // cout<<"#";

                    if( (added) % n ==0 )
                    {
                        cout<<V[added].size()<<endl;
                        for(vit=V[(added)].begin();vit!=V[(added)].end();++vit)
                            cout<<*vit<<" ";
                        i=n;
                        flag=1;
                        break;
                    }
                    }
                }
            M[a[i]]=1;
        }
        if(flag==0)
            cout<<"-1";
        cout<<endl;
   }

return 0;
}
