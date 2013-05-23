#include<stdio.h>
int main()
{int sum,i,t=10;while(t--){char s[21];scanf("%s",&s);i=0,sum=1;for(i=0;i<strlen(s);i++)if(s[i]=='L'||s[i]=='D'||s[i]=='T'||s[i]=='F')sum*=2;printf("%d\n",sum);}return 0;}

