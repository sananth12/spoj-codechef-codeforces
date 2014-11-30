#include<stdio.h>
inline int fastinput()
{
	int inp=0;char c=0;
        c=getchar_unlocked();
	while(c>='0'&&c<='9')
	{
		inp=inp*10+c-'0';
		c=getchar_unlocked();
	}
	return inp;
}
inline void fastwrite(int a)
{
	char snum[20];
	int i=0;
	do
	{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
	while(i>=0)
	putchar_unlocked(snum[i--]);
	putchar_unlocked('\n');
}
int main()
{
   int t,g,i,q,n;
   t= fastinput();
   while(t--)
   {
        g=fastinput();
        while(g--)
        {
             //cin>>i>>n>>q;
            i=fastinput();
            n=fastinput();
            q=fastinput();
            if(! (n&1))
                fastwrite(n/2);
                //printf("%d\n",n/2);
            else
            {
                if( i==q )
                    fastwrite(n/2);
                    //printf("%d\n",n/2);
                else
                    fastwrite(n/2 +1);
                //    printf("%d\n",n/2 +1);
            }
        }
   }
return 0;
}
