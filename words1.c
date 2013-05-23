#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
         int n,beg[27]={0},end[27]={0},i;
         char s[1005];
         scanf("%d",&n);

         while(n--)
         {
             scanf("%s",&s);
             beg[s[0]-97]++;
             end[s[strlen(s)-1]-97]++;
         }
         int flag=1,ct=0;
         for(i=0;i<26;i++)
            if(beg[i]!=end[i])
               ct++;
         if(ct>2)
            flag=0;
         if(flag)
            printf("Ordering is possible.\n");
         else
            printf("The door cannot be opened.\n");

    }
return 0;
}
