#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<limits.h>
#include<stdlib.h>
#include<map>
#include<vector>
using namespace std;
#define mod 1000000007
#define ll long long
#define ull unsigned long long
bool ar[100][100];
struct Point
{
    int x;
    int y;
}points[100];
int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // colinear

    return (val > 0)? 1: 2; // clock or counterclock wise
}
bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
	/*printf("%d %d\n",p1.x,p1.y);
	printf("%d %d\n",q1.x,q1.y);
	printf("%d %d\n",p2.x,p2.y);
	printf("%d %d\n",q2.x,q2.y);*/
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    if (o1 != o2 && o3 != o4)
    return 1;
    else return 0;
}
int main()
{
	int t,n,b[3000][100],itr=0,flag;
	char road[100][100];
	bool visited[55];
	fill(visited,visited+55,0);
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d%d",&points[i].x,&points[i].y);
		gets(road[0]);
		for(int i=0;i<n;i++)
		gets(road[i]);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{

				if(road[i][j]=='Y'&&ar[i][j]==0)
				{
					ar[i][j]=1;
					ar[j][i]=1;
					b[itr][0]=1;
					b[itr][1]=i;
					b[itr][2]=j;
					visited[i]=1;
					visited[j]=1;
					int x=i,y=j;
					flag=1;
					while(flag)
					{
						flag=0;
						for(int k=0;k<n;k++)
						{
							if(road[y][k]=='Y'&&ar[y][k]==0&&visited[k]==0)
							{
								bool a=0;
								for(int w=1;w<b[itr][0];w++)
								{
									a=doIntersect(points[y],points[k],points[b[itr][w]],points[b[itr][w+1]]);
									if(a==1)
									break;
								}
								if(a==0)
								{
									b[itr][0]++;
									int o=b[itr][0];
									b[itr][o+1]=k;
									visited[k]=1;
									ar[y][k]=1;
									ar[k][y]=1;
									flag=1;
									x=y;
									y=k;
								}
							}
						}
					}
					itr++;
					fill(visited,visited+55,0);


				}
			}
		}
		printf("%d\n",itr);
		for(int i=0;i<itr;i++)
		{
			printf("%d ",b[i][0]);
			for(int j=1;j<=b[i][0]+1;j++)
			printf("%d ",b[i][j]);
			printf("\n");

		}

}

