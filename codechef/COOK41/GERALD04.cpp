#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        char s[7];
        cin>>s;
        float h=(s[0]-'0')*10 + (s[1]-'0');
        float m=(s[3]-'0')*10 + (s[4]-'0');

        cin>>s;
        float h2=(s[0]-'0')*10 + (s[1]-'0');
        float m2=(s[3]-'0')*10 + (s[4]-'0');

        float dist;
        cin>>dist;

        float ans=(h-h2)*60 +(m-m2)+dist;
        printf("%0.1f ",ans);

        ans=0;

        if(2*dist<=(60*(h-h2)+(m-m2)))
            ans=60*(h-h2)+(m-m2);
        else
        {
            float diff=(60*(h-h2)+(m-m2));

            ans=dist;

            float delta=diff-dist;

            if(delta>0)
            {
                ans+=delta+(dist-delta)/2;
            }
            else
            {
                ans+=(dist+delta)/2;
            }


        }
         printf("%0.1f\n",ans);
   }

return 0;
}
