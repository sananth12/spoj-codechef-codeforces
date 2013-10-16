#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int m,n,c2,c3,a[101][101]={0},b[101][101]={0},i,j,count=0;
        scanf("%d%d%d%d",&m,&n,&c2,&c3);
        for(i=0;i<m;i++)
        {
            char c[105];
            scanf("%s",&c);
            for(j=0;j<n;j++)
            {
                if(c[j]=='B')
                {
                    a[i][j]=1,b[i][j]=1;
                    count++;
                }
                else
                a[i][j]=0,b[i][j]=0;
            }
        }
        /*******************/
        int swap=0,conv=0;
         for(i=0;i<m;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                if(a[i][j]==1)
                {
                    int k=j+1;
                    while(k<n)
                    {
                       int temp=a[i][k-1];
                       a[i][k-1]=a[i][k];
                       a[i][k]=temp;
                        swap++;
                        k++;
                    }

                }
            }
        }
          for(i=0;i<m;i++)
            {
                if(a[i][n-1]==0)
                conv++;

            }
       if(swap+(c2*conv) < c3*(count) )
        {
            printf("%d\n",swap+conv);
             for(i=0;i<m;i++)
            {
                for(j=n-1;j>=0;j--)
                {
                    if(b[i][j]==1)
                    {
                        int k=j+1;
                        while(k<n)
                        {
                            int temp=b[i][k-1];
                            b[i][k-1]=b[i][k];
                            b[i][k]=temp;
                            printf("1 %d %d %d %d\n",i+1,k+1,i+1,k);
                            k++;
                        }

                    }
                }
            }
            for(i=0;i<m;i++)
            {
                if(b[i][n-1]==0)
                printf("2 %d %d\n",i,n);

            }

        }
        /**********************/
        else
        {

        printf("%d\n",count);
         for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(b[i][j]==1)
                {
                    printf("3 %d %d\n",i+1,j+1);
                }
            }
        }
        }
   }


return 0;
}
