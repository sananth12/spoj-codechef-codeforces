#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
   int t,count=1,flag=0;
   string a,s;
   scanf("%d",&t);
   while(t--)
   {
        cin>>a;
        if(flag==0)
        {
            flag++;
            s=a;
        }
        if(a!=s)
        {
            s=a;
            count++;
        }
      //  printf("**%d**\n",t);
   }
   printf("%d",count);
return 0;
}
