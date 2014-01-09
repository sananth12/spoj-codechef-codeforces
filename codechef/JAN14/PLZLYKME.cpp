#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        long long d,s,l,c,i;
        cin>>l>>d>>s>>c;
        for(i=0;i<d-1;i++)
        {
			if(s>=l)
                break;
			s+=s*c;
		}

		if(l>s)
            cout<<"DEAD AND ROTTING\n";
		else
            cout<<"ALIVE AND KICKING\n";
   }

return 0;
}
