#include<stdio.h>

char Survey(int x, int y) {
    printf("S %d %d\n", x, y);
    fflush(stdout);
    char res;
    scanf(" %c", &res);
    return res;
}

void Neutralize(int x, int y) {
    printf("N %d %d\n", x, y);
    fflush(stdout); /* but it is not necessary here */
}
int main()
{
   int n,m,k,i,j,p,q,happ=0,flag=0,blast=0,safe[55][55]={0};

   scanf("%d%d%d",&n,&m,&k);
   for(i=0;i<n&&flag==0;i++)
   {
       for(j=0;j<n&&flag==0;j++)
       {    happ=0;
            if(safe[i][j]>=1)
            { happ++;}

           if(happ==0)
           {
           char c=Survey(i,j);
           if(c=='M')
            {
                Neutralize(i,j);
                blast++;
            }
           if(blast==m)
               flag++;
            if(c=='0')
            {
                   safe[i+1][j]++;
                   safe[i+1][j+1]++;
                   safe[i+1][j-1]++;
                   j++;

            }
            }

        }
      }

   printf("Done");
return 0;
}
