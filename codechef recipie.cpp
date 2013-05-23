#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
      int n=0;
      scanf("%d",&n);
      getch();
     // while(n>0)
   //{  cout<<"********";
   begin:; 
      char s[25],a[15],b[10];
      cout<<"********";
      gets(s);   
     //////////////// s-split to a & b
      int i=0,j=0,flag=0;
      while(s[i]!='\0')
      {
         if(s[i]==' ')
         {flag=1;
          goto lable;}
          
         if(flag==0)
        { a[i]=s[i];
        
        }
         else
         {b[j]=s[i];
         
          j++;
          }
         
         lable:;             
      i++;                   
      }
      //////////////////
      
      
      int p=0,q=0;
      for(p=0;p<=(i-j-2);p++)
      {
         // case 1
         int count=0;
          for(q=0;q<=j;q++)
          {   
              if(a[p]==b[q])
              count++;
              }
              if(count==0)
              {   
                  cout<<"YES";
                  exit(0);
               }
               
               }
                // case 1 done          

// case 2&3

         int count2=0,count1=0,p1=0;
      for(p=0;p<=(i-j-2);p++)
      {  
                 char ch=a[p];
      
      for(p1=0;p1<=(i-j-2);p1++)
      {       
                if(a[p1]==ch)
                count1++;
                }

          for(q=0;q<=j;q++)
          {   
              if(b[q]==ch)
              count2++;
              }
                    
              if(count1!=count2)
              {
                      cout<<"NO";
                      getch();
                      exit(0);          }
                              
      }
      
 cout<<"YES";
 n--;      
if(n>0)
goto begin;
 getch();
      }
