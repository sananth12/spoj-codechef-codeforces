#include<stdio.h>
#include<conio.h>
int main()
{ int z=0;
 scanf("%d",&z);
 int i,k,l,n,b=0,t,r[18],m,w,f=0,flag,c1=0,index[20]={0},r1[20],index1[20]={0},c2=0;
 while(z--)
     { 
      c1=0;
      c2=0;
      b=0;
      f=0;
      scanf("%d %d %d",&n,&k,&w);
      for(i=0;i<n;i++)
      {
      scanf("%d",&r[i]);
      r1[i]=r[i];
      }
      i=n-k;
      while(i>=0)
      {flag=0;int u=i,j;
      m=0;
      for(j=i+k-1;j>=i;j--)
       {
       if(r[j]>m)
       {
            m=r[j];
       f=j;
       b++;
       }
     
       }
       int pos[20]={0},count=0,x=0;
       
       for(j=i+k-1;j>=i;j--)
      {  
                           if(r[j]==m)
                           {flag++;
                           pos[count]=j;
                           count++;}
                           
                           }
     
        if(b==0)
        {
                flag=w;
                f=i+k-1;
                }
      if(flag>=w)
       {
      while(index[f]!=0)          
      {
        x++;
        f=pos[x];
        }
        
        r[f]++;
       index[f]++;
        c1++;}
       
        
       
      i--;}
      
      i=0;
      while(i<=(n-k))
      {flag=0;int u=i,j;
      m=0;
      for(j=i+k-1;j>=i;j--)
       {
       if(r1[j]>m)
       {
            m=r1[j];
       f=j;
       b++;
       }
     
       }
       int pos[20]={0},count=0,x=0;
       
       for(j=i+k-1;j>=i;j--)
      {  
                           if(r1[j]==m)
                           {flag++;
                           pos[count]=j;
                           count++;}
                           
                           }
     
        if(b==0)
        {
                flag=w;
                f=i+k-1;
                }
      if(flag>=w)
       {
      while(index1[f]!=0)          
      {
        x++;
        f=pos[x];
        }
        
        r1[f]++;
       index1[f]++;
        c2++;}
       
        
       
      i++;}
       if(w==1)
       {
        printf("-1\n");
        }
       else
       {
        printf("%d\n",c1>=c2?c2:c1);
        }
      } 
      
 }
