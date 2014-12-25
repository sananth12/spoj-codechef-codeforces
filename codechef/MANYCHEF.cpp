#include<stdio.h>
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
        string s;
        cin>>s;
        for(int i=s.length()-4;i>=0;i--)
            {
                if(s[i]=='?' || s[i]=='C')
                    if(s[i+1]=='?' || s[i+1]=='H')
                            if(s[i+2]=='?' || s[i+2]=='E')
                                if(s[i+3]=='?' || s[i+3]=='F')
                                    {
                                        s[i]='C';
                                        s[i+1]='H';
                                        s[i+2]='E';
                                        s[i+3]='F';
                                    }
            }
          for(int i=0;i<s.length();i++)
            {
                if(s[i]=='?')
                    cout<<'A';
                else
                    cout<<s[i];
            }
    cout<<endl;
   }
return 0;
}

