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
        string f,s,ans;
        int n,i,pos=0;
        char c[200],x,y;
        for(i=0;i<200;i++)
            c[i]=' ';
        cin>>n;
        int d_flag=-1;
        for(i=0;i<n;i++)
            {
                cin>>x>>y;
                c[(int)x]=y;
            }
        cin>>f;
        int z_flag=0,lead_zero=0;
        s=f;
        for(i=0;i<f.length();i++)
        {
            if( c[(int)f[i]] !=' ')
                s[i]=c[(int)f[i]];
            else
                s[i]=f[i];

            if(s[i]=='.')
                d_flag=i;

            if(z_flag==0)
            {
                if(s[i]=='0')
                    lead_zero++;
                else
                    z_flag=1;
            }
        }
        if(lead_zero)
        s.erase(0,lead_zero);
       // cout<<s<<"\n";

        if(d_flag!=-1)
        {
            int x=0,N=s.length()-1;
            for(i=N;s[i]!='.';i--)
            {
                if(s[i]=='0')
                    {x++;}
                else
                    break;
            }
            s.erase(N-x+1,x);
            if(s[s.length()-1]=='.')
                s.erase(s.length()-1,1);
        }

        if(s.length()==0)
            cout<<"0\n";
        else
        cout<<s<<endl;

   }

return 0;
}
