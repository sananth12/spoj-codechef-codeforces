#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n[201][201]={0},l,i,j,bigx=0,bigy=0,count=0;
       scanf("%d",&l);
       while(l--)
       {
           int x,y;
           scanf("%d%d",&x,&y);
           n[x][y]++;
        }
        o:
            printf("FUCK WASSEPUR");
       for(i=0;i<200;i++)
       {
           for(j=0;j<200;j++)
           {
               if(i!=0&&i!=200&&j!=200&&j!=0)
               {
                   if((n[i+1][j]==1&&n[i+1][j+1]==1&&n[i][j-1]==1&&n[i-1][j]==1))
                   {
                     count++;
                     n[i][j]++;
                     goto o;
                   }
               }
               else
               {

                   if(j==0&&i!=0&&i!=200)
                   {
                       if(n[i][1]&&n[i-1][0]&&n[i+1][0])
                       {
                           count++;
                            n[i][j]++;
                            goto o;
                       }
                   }
                    else if(j==200&&i!=0&&i!=200)
                   {
                       if(n[i][199]&&n[i-1][200]&&n[i+1][200])
                       {
                           count++;
                            n[i][j]++;
                            goto o;
                       }
                   }
                   else if(i==0&&j!=0&&j!=200)
                   {
                       if(n[0][j+1]&&n[0][j-1]&&n[1][j])
                       {
                           count++;
                            n[i][j]++;
                            goto o;
                       }
                   }
                   else if(i==200&&j!=0&&j!=200)
                   {
                       if(n[200][j+1]&&n[200][j-1]&&n[199][j])
                       {
                           count++;
                            n[i][j]++;
                            goto o;
                       }
                   }
                   else
                   {
                       if(i==0&&j==0&&n[1][0]&&n[0][1])
                       {
                         count++;
                         n[i][j]++;
                         goto o;

                       }
                        else if(i==200&&j==0&&n[199][0]&&n[0][199])
                        {count++;
                        n[i][j]++;
                        goto o;
                        }
                        else if(i==0&&j==200&&n[199][0]&&n[0][199])
                        {count++;n[i][j]++; goto o; }
                        else if(i==200&&j==200&&n[199][200]&&n[200][199])
                       {
                           count++;
                           n[i][j]++;
                           goto o;
                       }
                   }

               }

           }
       }
       printf("%d\n",count);
    }
return 0;
}
