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
int main()
{
   int i,n,k,ans=0,size=0;
   //scanf("%d",&n);
   n=fastinput();
   for(i=0;i<n;i++)
   {
       //scanf("%d",&k);
       k=fastinput();
       if(k!=0)
        size++;
       else
       size=0;

        if(size>ans)
            ans=size;
   }
   printf("%d",ans);

return 0;
}
