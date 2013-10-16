#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int i,j,n,x[1001],y[1001],x1[1001],y1[1001];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&x[i],&y[i]);
            x1[i]=x[i];
            y1[i]=y[i];
        }
        sort(x1,x1+n);
        sort(y1,y1+n);
        int prev,flag=1,count,maxx,maxy,posx,posy,ans=0,minus=0;
        while(flag)
        {
            //cin.get();
            minus=0;
            for(i=0;i<n;i++)
            {
               // cout<<x1[i]<<" ";
                if(x1[i]==-1)
                minus++;
            }
           // cout<<minus<<"\n";
            if(minus==n)
            {
                flag=0;
                break;
            }
            prev=x1[0];
            count=1,maxx=0,posx=prev;
            for(i=1;i<n;i++)
            {
                if(x1[i]<0)
                {

                }
                else
                {

                if(x1[i]!=prev)
                {
                    if(maxx<=count)
                    {
                        maxx=count;
                        posx=prev;

                    }
                    count=1;
                    prev=x1[i];

                }
                else
                    count++;

                }
            }

            if(maxx<=count)
                    {
                        maxx=count;
                        posx=prev;

                    }
            prev=y1[0];
            count=1,maxy=0,posy=prev;
            for(i=1;i<n;i++)
            {

                if(y1[i]<0)
                {

                }
                else
                {
                if(y1[i]!=prev)
                {
                    if(maxy<=count)
                    {
                        maxy=count;
                        posy=prev;
                    }
                    count=1;
                    prev=y1[i];
                }

                else
                    count++;

                }
            }
             if(maxy<=count)
                    {
                        maxy=count;
                        posy=prev;
                    }
           // cout<<"**\n";
            if(maxx>=maxy)
            {
                 int temp[1001],tp=0;
                 for(i=0;i<n;i++)
                  {
                      if(x1[i]==posx)
                      {
                          x1[i]=-1;
                      }
                      if(x[i]==posx)
                      {
                          temp[tp]=i;
                          tp++;
                      }
                  }
                  for(i=0;i<tp;i++)
                   y1[temp[i]]=-1;

                  //cout<<"maxx "<<maxx<<"\n";
            }

            else
            {     //  cout<<"aa\n";
                 int temp[1001],tp=0;
                 for(i=0;i<n;i++)
                  {
                      if(y1[i]==posy)
                      {
                          y1[i]=-1;
                      }
                      if(y[i]==posy)
                      {
                          temp[tp]=i;
                          tp++;
                      }

                  }
                  for(i=0;i<tp;i++)
                       x1[temp[i]]=-1;

                 // cout<<"maxy "<<maxy<<"\n";
            }
            ans++;
           // cout<<"END\n";
        }
        printf("%d\n",ans);
   }


return 0;
}
