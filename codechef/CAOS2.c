#include<stdio.h>
int main()
{
   int t,mon[502],primes[]={2,   3,   5,   7,  11,  13,  17,  19,  23,  29,  31,  37,41,
   43,  47,  53,  59,  61,  67,  71,  73,  79,  83,  89,  97, 101,
 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167,
 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239,
241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313,
 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397,
401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467,
 479, 487, 491, 499};
int o,p=0,tc=0;
for(o=0;o<95;o++)
{
   while(p<primes[o])
   {
       mon[p]=tc;
       p++;
   }
   tc++;
}

   scanf("%d",&t);
   while(t--)
   {
     int i,j,r,k,c,counter=0;
     char a[502][502];
     int stop=0;
     scanf("%d%d",&r,&c);
     /*for(i=0;i<r;i++)
     {
         scanf("%s",&a[i]);
     }*/
     for(i=0;i<r;i++)
     for(j=0;j<c;j++)
        scanf(" %c",&a[i][j]);
     int up[505][505]={0},down[505][505]={0},right[505][505]={0},left[505][505]={0};
     for(i=0;i<r;i++)
     {
         if(a[i][0]=='^')
         {up[i][0]=1;
          left[i][0]=1;
          up[i][0]=1;
          down[i][0]=1;
         }
         if(a[i][0]=='#')
         {up[i][0]=0;
          left[i][0]=0;
          up[i][0]=0;
          down[i][0]=0;
         }
         if(a[i][c-1]=='^')
         {up[i][c-1]=1;
          left[i][c-1]=1;
          up[i][c-1]=1;
          down[i][c-1]=1;
         }
          if(a[i][c-1]=='#')
          {up[i][c-1]=0;
          left[i][c-1]=0;
          up[i][c-1]=0;
          down[i][c-1]=0;
         }
     }
     for(i=0;i<c;i++)
     {
         if(a[0][i]=='^')
         {up[0][i]=1;
          left[0][i]=1;
          up[0][i]=1;
          down[0][i]=1;
         }
         if(a[0][i]=='#')
         {up[0][i]=0;
          left[0][i]=0;
          up[0][i]=0;
          down[0][i]=0;
         }
         if(a[r-1][i]=='^')
         {up[r-1][i]=1;
          left[r-1][i]=1;
          up[r-1][i]=1;
          down[r-1][i]=1;
         }
         if(a[r-1][i]=='#')
         {up[r-1][i]=0;
          left[r-1][i]=0;
          up[r-1][i]=0;
          down[r-1][i]=0;
         }
     }
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {

                 if(a[i][j]=='^')
                 {
                     left[i][j]=left[i][j-1]+1;
                       up[i][j]=up[i-1][j]+1;
                 }
                 if(a[i][j]=='#')
                 {
                     left[i][j]=0;
                     up[i][j]=0;
                 }
                 if(a[r-i-1][j]=='^')
                 {
                     down[r-i-1][j]=down[r-i][j]+1;
                 }
                 if(a[r-i-1][j]=='#')
                 {
                     down[r-i-1][j]=0;
                 }
                 if(a[i][c-j-1]=='^')
                 {
                     right[i][c-j-1]=right[i][c-j]+1;
                 }
                 if(a[i][c-j-1]=='#')
                 {
                     right[i][c-j-1]=0;
                 }
          }
     }

        for(i=1;i<r-1;i++)
     {
         for(j=1;j<c-1;j++)
         {

                 if(a[i][j]=='^')
                 {
                      int p,q,m,n,min=0;
                      p=up[i-1][j];
                      q=down[i+1][j];
                      m=right[i][j+1];
                      n=left[i][j-1];

                      min=((p<q?p:q)<m?(p<q?p:q):m)<n?((p<q?p:q)<m?(p<q?p:q):m):n;

                    //  printf("i=%d,j=%d up=%d,down=%d,r=%d,l=%d,min=%d,mon[min]=%d\n",i,j,p,q,m,n,min,mon[min]);
                      counter+=mon[min];

                 }
         }

     }
     printf("%d\n",counter);
   }
return 0;
}
