#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  
  
  while(t--)
  {    
      char s[400]={'L'}; 
      scanf("%s",&s); 
      int i,count=0;
      for(i=0;i<400;i++)
       {
          if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R')
           count++;
           
           else if(s[i]=='B')
           count+=2;             
       } 
       printf("%d\n",count);       
   }
  
  
  return 0;
  
}
