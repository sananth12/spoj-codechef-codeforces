#include<stdio.h>
#include<math.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
              char s[100];
              scanf("%s",&s);
              int i=0;
              int a[100]={0},b[100]={0};
              
              while(s[i]!='+' && s[i]!= '-')
              {  
                 a[i]=s[i]-48;                
                 i++;             
              
              }
              int pos=i;
              i++;
              int j=0;
             
              while(i<strlen(s))
              {
                  b[j]=s[i]-48;
                  j++;
                  i++;
              }
              int num1=0,num2=0,k=0;
           
              for(i=strlen(s)-1-j-1;i>=0;i--,k++)
                  num1=num1+(a[i]*pow(10,k));
                   
              k=0;
              for(i=j-1;i>=0;i--,k++)
              num2+=(b[i]*pow(10,k));
              
              
              printf("%ld %ld\n",num1,num2);
              
              if(s[pos]=='+')
              printf("%ld\n",num1+num2);
              else
              printf("%ld\n",num1-num2);
    }
}
