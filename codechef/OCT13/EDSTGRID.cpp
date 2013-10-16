#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int m,n,c2,c3,a[101][101],i,j,count=0;
        scanf("%d%d%d%d",&m,&n,&c2,&c3);
        for(i=0;i<m;i++)
        {
            string s;
            cin>>s;
            for(j=0;j<n;j++)
            {
                if(s[j]=='B')
                {
                    a[i][j]=1;
                    count++;
                }
                 else
                 a[i][j]=0;
            }
        }
        printf("%d\n",count);
         for(i=0;i<m;i++)
        {
            for(j=0;i<n;j++)
            {
                if(a[i][j]==1)
                {
                    printf("3 %d %d\n",i,j);
                }
            }
        }
   }


return 0;
}
