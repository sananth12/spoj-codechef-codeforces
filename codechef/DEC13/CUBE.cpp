#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main ()
{
    int t, n, p;
    scanf("%d", &t);
    char c1[64010],c2[64010];
    int arr[40][40][40],x,y,xx,yy,zz,i,j,k,max,num,d,tot_size,sum;
    while (t--)
    {
    	memset(arr, 0, sizeof(arr));
    	scanf("%d %d", &n, &p);scanf("%s", c1);scanf("%s", c2);
        for ( i = 1; i <= n; i++)
            for ( j = 1; j <= n; j++)
                for ( k = 1; k <= n; k++)
                {
                     x = (i-1)*n*n;y = (j-1)*n;
                    arr[i][j][k] = (c1[x+y+(k-1)] == c2[x+y+(k-1)]) ? 1 : 0;
                }
        for ( i = 1; i <= n; i++)
            for ( j = 1; j <= n; j++)
                for ( k = 1; k <= n; k++)
                {
                	arr[i][j][k] += (arr[i-1][j][k] + arr[i][j-1][k] + arr[i][j][k-1]
                                  - arr[i-1][j-1][k] - arr[i-1][j][k-1] - arr[i][j-1][k-1]
                                   + arr[i-1][j-1][k-1]);
                }
        max=0,num=0,sum;
        for ( d = n-1; d >= 0; d--)
        {
            tot_size = (d+1)*(d+1)*(d+1);
            for ( i = 1; i + d <= n; i++)
                for ( j = 1; j + d <= n; j++)
                    for ( k = 1; k + d <= n; k++)
                    {
                         xx = i + d;yy = j + d;zz = k + d;
                         sum = arr[xx][yy][zz] - arr[i-1][yy][zz] - arr[xx][j-1][zz] - arr[xx][yy][k-1]
                              + arr[i-1][j-1][zz] + arr[i-1][yy][k-1] + arr[xx][j-1][k-1] -
                              arr[i-1][j-1][k-1];
                        if (sum*100 >= (p*tot_size))
	                    {
	                    	max = d+1;
	                    	num++;
	                    }
                    }
			if (max!=0)
				break;
        }
        if (max == 0)
        	printf("%d\n", -1);
        else
        	printf("%d %d\n", max, num);
    }
    return 0;
}
