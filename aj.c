#include<stdio.h>
inline int f()
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
  int n,q,r,x,i;
  n=f();
  q=f();
  int row[314200]={0},col[314200]={0};
  char s[30];
 
  while(q--)
  { scanf("%s%d%d",&s,&r,&x);
  if(s[0]=='R')
      row[r]+=x;             
   else
     col[r]+=x; 
  }
int maxr=0,maxc=0;  
for(i=0;i<n;i++)
      if(row[i]>maxr)
        maxr=row[i];  
          
for(i=0;i<n;i++)
      if(col[i]>maxc)
        maxc=col[i];            
             
printf("%d",maxr+maxc);
return 0;
}
