#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 1005

int main ()
{
	static char data[MAXN];
	scanf("%s",data);
	int N = strlen(data);
	static int datacnt[256];
	memset(datacnt,0,sizeof(datacnt));
	int i, j;
	int max = 0;
	int maxw = 0;
	for (i = 0; i < N; i++)
	{
		(datacnt[(int)(data[i])])++;
		if (datacnt[(int)(data[i])] > max)
		{
			max = datacnt[(int)(data[i])];
			maxw = (int)(data[i]);
		}
	}
	static char a[MAXN];
	memset(a,0,sizeof(a));
	static char p[MAXN];
	memset(p,1,sizeof(p));
	p[0] = 0;
	p[1] = 0;
	int cnt = 0;
	for (i = 2; (i*i) < MAXN; i++)
	{
		for (j = i*2; j < MAXN; j += i) p[j] = 0;
	}
	for (i = 2; i <= N; i++)
	{
		if ((p[i]) && ((i*2) <= N))
		{
			for (j = i; j <= N; j += i)
			{
				if (!a[j]) cnt++;
				a[j] = 1;
			}
		}
	}
	if (cnt > max)
	{
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	datacnt[maxw] -= cnt;
	j = 0;
	for (i = 1; i <= N; i++)
	{
		if (a[i]) printf("%c",maxw);
		else
		{
			while (datacnt[j] == 0) j++;
			printf("%c",j);
			(datacnt[j])--;
		}
	}
	printf("\n");
	return 0;
}
