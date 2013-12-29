#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        string tmp,s,f;
        int i,counter[150]={0},global=25;
        cin>>f;
        cin.ignore();
        getline(cin,s);
        tmp=s;

        for(i=0;i<s.length();i++)
          s[i]=tolower(s[i]);

        for(i=0;i<s.length();i++)
        {
            if((int)s[i]>96 && (int)s[i]<123 && counter[(int)s[i]]==0)
                counter[(int)s[i]]=count(s.begin(),s.end(),s[i]);

        }
   int flag=0;
   while(flag==0)
   {
       int max=0,pos=0;
       for(i=97;i<123;i++)
       {
          if(counter[i]>=max)
           {
               pos=i;
               max=counter[i];
           }
       }
       if(max==0)
       {
           flag++;
           break;
       }
       for(i=0;i<s.length();i++)
        {
            if((int)s[i]==pos)
            {
                if(isupper(tmp[i]))
                    tmp[i]=toupper(f[global]);
                else
                    tmp[i]=f[global];
            }
        }

        global--;
        counter[pos]=0;
   }
   cout<<tmp<<endl;

   }

return 0;
}
