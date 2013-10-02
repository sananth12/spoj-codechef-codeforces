#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
inline long long fastinput()
{
	long long  inp=0;char c=0;
        c=getchar_unlocked();
	while(c>='0'&&c<='9')
	{
		inp=inp*10+c-'0';
		c=getchar_unlocked();
	}
	return inp;
}
int main()
{
   long long t;
   t=fastinput();
   while(t--)
   {
         long long i,j,n,k,ans=0,N[1005];
         string  s;
         n=fastinput();
         k=fastinput();
         ans=fastinput();
         //scanf("%lld%lld%lld",&n,&k,&ans);
         //cin>>n>>k>>ans;
         for(i=0;i<n;i++)
         scanf("%lld",&N[i]);
         cin>>s;

         if(k==0)
         ans=ans;
         else if(s=="XOR" && k%2==0)
         ans=ans^0;
         else{
             for(j=0;j<n;j++)
             {
                 if(s=="AND")
                 ans=ans&N[j];
                 if(s=="OR")
                 ans=ans|N[j];
                 if(s=="XOR")
                 ans=ans^N[j];

             }
         }
        printf("%lld\n",ans);

   }
return 0;
}
