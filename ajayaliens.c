#include<stdio.h>
int ans[5000];
int u=0;
void fn(int a[100005][3],int n)
{ int count1=0;
  int w;
  scanf("%d",&w);
  int i=0;
  int b[30];
  for(i=0;i<w;i++)
   scanf("%d",&b[i]);
  int j=0;
  for(i=0;i<n;i++)
   {
   for(j=0;j<w;j++)
   {
   if(b[j]>=a[i][0]&&b[j]<=a[i][1])
    {count1++;break;}
   }
 }
ans[u]=count1;
u++;
}
int main()
{
void fn(int b[100005][3],int);
int n,j;
scanf("%d",&n);
int a[n+1][3],i;
for(i=0;i<n;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
int t;
scanf("%d",&t);
while(t--)
fn(a,n);
for(i=0;i<u;i++)
    printf("%d\n",ans[i]);
return 0;
}
