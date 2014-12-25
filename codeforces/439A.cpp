#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,d;
   cin>>n>>d;
   int i,joke=0,time[101]={0},t=0;
   for(i=0;i<n;i++)
   {
       cin>>time[i];
       t+=time[i];
       if(i==n-1)
        {
            if(t>d)
            {
                cout<<-1;
                return 0;
            }
            break;
        }
    t+=10;
    joke+=2;
   }

   joke += (d-t)/5;

   cout<<joke;

return 0;
}
