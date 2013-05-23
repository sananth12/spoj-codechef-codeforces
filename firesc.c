#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n[100010]={0},y,x,a,b,i=1,j,teamcount[100010]={0};
        scanf("%d%d",&x,&y);
        while(y--)
        {
             scanf("%d%d",&a,&b);
             if(n[a]==0&&n[b]!=0)
                n[a]=n[b];
              else if(n[b]==0&&n[a]!=0)
                n[b]=n[a];
              else if(n[b]!=n[a])
              {    int k=n[a];
                  for(j=1;j<x+1;j++)
                    if(n[j]==k)
                     n[j]=n[b];
                    i--;
              }
              else if(n[a]==0&&n[b]==0)
              {
                  n[a]=i;
                  n[b]=i;
                  i++;
              }
        }
        int c=0,l=0;
        for(j=1;j<x+1;j++)
        {
            if(n[j]==0)
                c++;
            else
                teamcount[n[j]]++;
        }
        int zero=c;
        c=1;
      for(j=1;j<i+1;j++)
        if(teamcount[j]!=0)
        c*=teamcount[j];

      printf("%d %d\n",(i+zero-1),c);
    }

return 0;
}
