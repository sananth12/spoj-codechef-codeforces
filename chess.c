#include<stdio.h>
int main()
{   int t,i,j,posi=0,posj=0,flag=0;
   char n[9][9];
   scanf("%d",&t);
   while(t--)
   {
       posi=0,posj=0,flag=0;
       for(i=0;i<8;i++)
        scanf("%s",&n[i]);

         for(i=0;i<8;i++)
             for(j=0;j<8;j++)
                if(n[i][j]=='B')
                {posi=i;posj=j;}
        i=posi;
        j=posj;
        while(i<8 && j>=0 && flag==0)//2 0 clock
        {
            if(n[i][j]=='B'&&( i!=posi && j!=posj ))
                flag++;
            else
            {
                 i++;
                 j--;
            }

        }
          i=posi;
        j=posj;
        while(i>=0 && j>=0 && flag==0)//10 0 clock
        {
            if(n[i][j]=='B'&&( i!=posi && j!=posj ))
                flag++;
            else
            {
                 i--;
                 j--;
            }

        }
          i=posi;
        j=posj;
        while(i<8 && j<8 && flag==0)//5 0 clock
        {
            if(n[i][j]=='B'&&( i!=posi && j!=posj ))
                flag++;
            else
            {
                 i++;
                 j++;
            }

        }
          i=posi;
        j=posj;
        while(i>=0 && j<8 && flag==0)//8 0 clock
        {
            if(n[i][j]=='B'&&( i!=posi && j!=posj ))
                flag++;
            else
            {
                 i--;
                 j++;
            }

        }
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
   }

return 0;
}
