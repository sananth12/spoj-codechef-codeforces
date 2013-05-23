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
inline long long fastinputl()
{
	long long inp=0;char c=0;
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
    int t,n;
    t=fastinput();
    while(t--)
    {
              n=fastinput();
              int c[49][49]={0},i,s,e,temp,profit[49]={0},j;
              for(i=0;i<n;i++)
              {
                              s=fastinput();
                              e=fastinput();
                              temp=fastinput();
                              if(temp>c[s][e])
                              c[s][e]=temp;
              }
              for(i=1;i<49;i++)
              {
                               temp=0;
                               for(j=0;j<i;j++)
                               {
                                                if(c[j][i]+profit[j]>temp)
                                                temp=c[j][i]+profit[j];
                               }
                               profit[i]=temp;
              }
              printf("%d\n",profit[48]);
    }
    return 0;
}
