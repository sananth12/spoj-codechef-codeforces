#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int h1,h2,m1,m2,s1,s2;
        cin>>h1>>m1>>s1;
        cin>>h2>>m2>>s2;
        int tot1,tot2;
        tot1=(h1*60*60)+(m1*60)+s1;
        tot2=(h2*60*60)+(m2*60)+s2;
        int diff=tot2-tot1;
        diff%=400;
        if(diff<100 || (diff>=200 && diff<=299) )
        cout<<"S\n";
        else
        cout<<"C\n";
   }
return 0;
}
