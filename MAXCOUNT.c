#include<stdio.h>
inline int fastinput()
{
	int inp=0;char c=0;
        c=getchar_unlocked();
	while(c>='0'&&c<='9')
	{
		inp=inp*10+c-'0';
		c=getchar_unlocked();
	}
	return inp;
}
int main()
{
   int t,n[100],m,i;
   t=fastinput();
   while(t--)
   {
           m=fastinput();
           
           for(i=0;i<m;i++)  
             n[i]=fastinput();
             
            int count=0,bigcount=0,small=n[0],j=0;
            
            for(i=0;i<m;i++)
            {
                      count=0;
                      for(j=0;j<m;j++)                     
                        {
                           if(n[i]==n[j])
                           count++;
                        
                        }
                        if(count>bigcount)
                        {
                                      bigcount=count; 
                                      small=n[i];   
                                          
                        }
                        else if(count==bigcount)
                        {
                             small=(small<n[i]?small:n[i]);
                         }                   
                  }          
            
            
            
            printf("%d %d\n",small,bigcount); 
             
             
   }
  return 0;
}

