#include<stdio.h>
#include<math.h>
#define MOD 1000000007;
unsigned long long power(unsigned long long  base, unsigned long long  exp) {
    unsigned long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
inline unsigned long long  fastinput()
{
	unsigned long long inp=0;char c=0;
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
   unsigned long long  t;
  // scanf("%llu",&t);
  t=fastinput();
   while(t--)
   {
        unsigned long long  n;
        int i;
        unsigned long long bin=0,arr[65]={0},pos=0,ans=0;
        //scanf("%llu",&n);
        n=fastinput();
        while(n>0)
        {
            arr[pos]=n%2;
            pos++;
            n=n/2;
        }


            for(i=pos-1;i>=0;i--)
            {
                bin=bin*10 + (arr[i]);
            }
            ans=power(2,bin);
            ans=(ans*ans)%MOD;

        printf("%llu\n",ans);
   }
return 0;
}
