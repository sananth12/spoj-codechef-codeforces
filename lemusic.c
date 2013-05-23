#include<stdio.h>
int fr()
{
    int input;
    char c=0;
    while (c<33) c=getchar_unlocked();
    input=0;
    while (c>33)
    {
          input=input*10+c-'0';
          c=getchar_unlocked();
    }
    return input;
}

int main()
{
    int t;
    t=fr();
    while(t--)
    {
        int i,b[100005]={0},l[100005]={0},n,g,j,temp,diffband[100005]={0};
        n=fr();
        for(i=1;i<=n;i++)
           {
               b[i]=fr();
               l[i]=fr();
           } //scanf("%d %d",&b[i],&l[i]);
     /// sorting
         for(i=1;i<=n;i++)
           {  int temp=0;
              for(j=1;j<=n-1;j++)
              {
                 if(l[j]>=l[j+1])
                 {
                   temp=l[j];
                   l[j]=l[j+1];
                   l[j+1]=temp;

                   temp=b[j];
                   b[j]=b[j+1];
                   b[j+1]=temp;
                 }
              }
           }
           int calc=0,diff=0;
           for(i=1;i<=n;i++)
           {
               if(diffband[b[i]]==0)
               {
                   diffband[b[i]]++;
                   diff++;
               }
               calc+=(diff*l[i]);
            }
          printf("%d\n",calc);
    }
return 0;
}
