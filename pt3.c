#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long score[200]={0},gift[200]={0};
        int a,i;
        scanf("%d",&a);
        for(i=0;i<a;i++)
            {
                scanf("%d",&score[i]);
                gift[i]=1;
            }
        long long ans=0;
        for(i=0;i<a-1;i++)
        {
            if(score[i+1]>score[i])
            {
                if(gift[i+1]<=gift[i])
                {
               gift[i+1]=(gift[i]+1);
                }
            }
            else if(score[i]>score[i+1])
            {
                if(gift[i]<=gift[i+1])
                   gift[i]=(gift[i+1]+1);
            }
        }
        for(i=0;i<a;i++)
              ans+=gift[i];
        printf("%lld\n",ans);
    }
return 0;
}
