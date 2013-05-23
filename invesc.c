#include<stdio.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
              char n[100][100];
              int N,i,j;
              scanf("%d",&N);
              for(i=0;i<N;i++)
              {
                 scanf("%s",&n[i]);                
              }
              int flag=1;
              char mem[100][100];
              i=0,j=0;
              
              while(flag)
              {
                  printf("*\n");
                  if(i==N-1 && j==N-1)
                     {      
                            printf("YES\n");
                            flag=0;
                     }
                  else
                  {
                      if(j+1<N)
                      {
                           if(n[i][j+1]=='.' && mem[i][j]!='r')
                           {
                                            
                                             mem[i][j]='r';
                                              j++;
                           }
                                             
                      }
                      else if(i+1<N)
                      {
                          if(n[i+1][j]=='.' && mem[i][j]!='d')
                           {
                                            mem[i][j]='d';
                                            i++;
                           }
                      }
                      else if(i-1>=0)
                      {
                           if(n[i-1][j]=='.'&& mem[i][j]!='u')
                          {
                                              mem[i][j]='u';
                                              i--;
                          }
                      }
                      else if(j-1>=0)
                      {
                           if(n[i][j-1]=='.'&& mem[i][j]!='l')
                           {
                                             mem[i][j]='l';
                                             j--;
                           }
                      }
                      else
                      {
                        printf("NO\n");
                        flag=0;
                      }
                      
                  }
                         
              } 
    }
}
      
              
