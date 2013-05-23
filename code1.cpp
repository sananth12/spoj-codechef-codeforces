#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void check(char s[1000])
{   int i=0,k=0,flag=0;
    char *a,*b;
    while(*(s+i)!='\0')
    {
       if(*(s+i)==' ')
       flag=1;

       if(flag==1)
       {
       *(b+k)=*(s+i);
       k++;
       }
       else
       {
       *(a+i)=*(s+i);
       }
       i++;
    }

    cout<<*b;
}
main()
{


   cout<<"Enter n\n";
   int n;
   cin>>n;
   while(n>0)
   {
   char s[1000];
   cin>>s;

   check(s);



   n--;
   }



getch();
}
