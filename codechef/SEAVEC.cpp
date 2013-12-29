#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
        long long flag2=1,x,y,flag=1,global=0,global2=0;
        long long pos[100005],pos2[100005],a[100005],b[100005],ans[100005]={0},ans2[100005]={0},tq;
        cin>>x>>y;

        for(long long i=0;i<x;i++)
         for(long long j=0;j<y;j++)
            {
                cin>>a[j+(y*i)];
            }
        for(long long j=0;j<y;j++)
        {
            cin>>b[j];
        }

         for(long long i=0;i<x;i++)
         {   flag=1;
            flag2=1;
             for(long long j=0;j<y;j++)
            {
                if(a[j+(y*i)]+ans[j]>b[j])
                    flag=0;
                if(a[j+(y*(x-i-1))]+ans2[j]>b[j])
                    flag2=0;
            }
            if(flag==1)
            {
                pos[global]=i+1;
                global++;
                for(long long j=0;j<y;j++)
                {
                    ans[j]+=a[j+(y*i)];
                }
            }
            if(flag2==1)
            {
                pos2[global2]=(x-i);
                global2++;
                for(long long j=0;j<y;j++)
                {
                    ans2[j]+=a[j+(y*(x-i-1))];
                }
            }
         }
         if(global==0)
         cout<<"0\n";
         else
         {
             //cout<<global<<" "<<global2<<endl;
             if(global>global2){
             cout<<global<<endl;
             for(int i=0;i<global;i++)
             cout<<pos[i]<<" ";
             }
             else
             {
                    cout<<global2<<endl;
                    for(int i=global2-1;i>=0;i--)
                    cout<<pos2[i]<<" ";

             }
             cout<<endl;
         }
    }
return 0;
}
