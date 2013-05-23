#include<stdio.h>
#include<ctype.h>
int main()
{
int n,m,i,j,k=0;
char c='/',s=']';
scanf("%d%d",&n,&m);
getchar();
for(i=0;i<n;i++)
	{
		c=getchar();
		if(c==s)  k=1;
		for(j=1;j<m;j++)
		{
			s=getchar();
			if(s!=c) k=1;
		}
	 getchar();
	}
if (k==0) printf("YES");
else printf("NO");
 return 0;
}
