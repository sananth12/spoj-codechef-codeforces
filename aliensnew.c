#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
a[i]==0;
int x,y,w;
for(i=0;i<n;i++)
  {
  scanf("%d%d",&x,&y);
   for(w=x;w<=y;w++)
   a[w]++;
  }
int t;
scanf("%d",&t);
int z[t];
for(i=0;i<t;i++)
z[i]=0;
int count1=0;
int r=0,abi=1,sum=0;
while(count1<t)
   {sum=0;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {scanf("%d",&abi);
    sum+=a[abi];
    }
    z[count1]=sum;
    count1++;
   }
for(i=0;i<t;i++)
printf("%d ",z[i]);

return 0;
}
