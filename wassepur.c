#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n[500][500]={0},l,i,j,bigx=0,bigy=0,count=0;
       scanf("%d",&l);
       while(l--)
       {
           int x,y;
           scanf("%d%d",&x,&y);
           n[x][y]++;
        }
       for(i=0;i<500;i++)
       {
           for(j=0;j<500;j++)
           {
               if(n[i][j]==0&&i!=0&&i!=499&&j!=499&&j!=0)
               {
                   if((n[i+1][j]==1&&n[i+1][j+1]==1&&n[i][j-1]==1&&n[i-1][j]==1))
                    count++;
               }
               else
               {

                   if(j==0&&i!=0&&i!=499&&n[i][j]==0)
                   {
                       if(n[i][1]&&n[i-1][0]&&n[i+1][0])
                       {
                           count++;
                       }
                   }
                    else if(j==499&&i!=0&&i!=499&&n[i][j]==0)
                   {
                       if(n[i][498]&&n[i-1][499]&&n[i+1][499])
                       {
                           count++;
                       }
                   }
                   else if(i==0&&j!=0&&j!=499&&n[i][j]==0)
                   {
                       if(n[0][j+1]&&n[0][j-1]&&n[1][j])
                       {
                           count++;
                       }
                   }
                   else if(i==499&&j!=0&&j!=499&&n[i][j]==0)
                   {
                       if(n[499][j+1]&&n[499][j-1]&&n[498][j])
                       {
                           count++;
                       }
                   }
                   else
                   {
                       if(i==0&&j==0&&n[1][0]&&n[0][1]&&n[i][j]==0)
                        count++;
                        else if(i==499&&j==0&&n[498][0]&&n[0][498]&&n[i][j]==0)
                        count++;
                        else if(i==0&&j==499&&n[498][0]&&n[0][498]&&n[i][j]==0)
                        count++;
                        else if(i==499&&j==499&&n[498][499]&&n[499][498]&&n[i][j]==0)
                        count++;
                   }

               }

           }
       }
       printf("%d\n",count);
    }
return 0;
}
