#include<stdio.h>
#include<math.h>
int main()
{
   int t,a=0,b=1,c=2,d=3;

      int x,y,p=0;
      scanf("%d%d",&x,&y);
          if(x==1&&y==0||x==0&&y==0)
                p=0;
          else if((x>=0&&y>=0)&&(abs(x)>=abs(y)))
            p=((abs(x)-1)*4)+1;
          else if((x>=0&&y>=0)&&(abs(x)<abs(y)))
            p=((abs(y)-1)*4)+2;
          else if((x<=0&&y>=0)&&(abs(x)<=abs(y)))
            p=((abs(y)-1)*4)+2;
          else if((x<=0&&y>=0)&&(abs(x)>abs(y)))
            p=((abs(x)-1)*4)+3;
          else if((x<=0&&y<=0)&&(abs(x)>=abs(y)))
             p=((abs(x)-1)*4)+3;
          else if((x<=0&&y<=0)&&(abs(x)<abs(y)))
            p=((abs(y)-1)*4)+4;
          else if((x>=0&&y<=0)&&(abs(x)<=abs(y)+1))
            p=((abs(y)-1)*4)+4;
          else
            p=((abs(x)-1)*4)+1;


          printf("%d",p);


return 0;
}
