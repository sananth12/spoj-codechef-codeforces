#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
   string s;
   scanf("%s",&s);
   int i,odd=0,alph[27]={0};
   for(i=0;i<s.length();i++)
   {
       alph[s[i]-'a']++;
   }
   for(i=0;i<26;i++)
   {
       //printf("%d %d\n",i,alph[i]);
       if(alph[i]%2!=0)
       odd++;
   }
   if(odd==0 || odd%2!=0 || odd==1)
   printf("First\n");
   else
   printf("Second\n");


return 0;
}
