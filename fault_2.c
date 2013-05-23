#include<stdio.h>
int main()
{
    int n,s,i,j=0,c=0,a[205][1010]={0},chunk[205]={0};
    scanf("%d%d",&n,&s);
   for(i=0;i<s;i++)
    {
       int t,dummy,g;
       scanf("%d",&t);
        while(t--)
        {
              scanf("%d",&g);
              a[g][chunk[g]]=i;
              chunk[g]++;
        }
    }
    int small=10000000,smallchunk=0;
    for(i=0;i<n;i++)
        {
            if(chunk[i]<=small)
                {
                    small=chunk[i];
                    smallchunk=i;
                }
        }
    if(small<=(s-n))
    {

    printf("%d\n",small);
    for(i=0;i<small;i++)
        printf("%d\n",a[smallchunk][i]);

    }
    else
    {
        printf("%d\n",s-n);
    for(i=0;i<(s-n);i++)
        printf("%d\n",i);
    }
return 0;
}
