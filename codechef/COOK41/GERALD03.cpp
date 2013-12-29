#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n,i,l,r,l2,r2,j,flag=0,ans=0;
        string s="";
        cin>>n;
        cin>>l>>r;
        for(i=1;i<n;i++)
            {
                cin>>l2>>r2;

                int del_r=abs(r2-r);
                int del_l=abs(l2-l);

                ans+=del_l+del_r;

                while(l!=l2)
                {
                    if(l2>l)
                    {
                            if(l+1==r)
                                {
                                    s+="R+";
                                    del_r--;
                                    r++;
                                }
                            else
                            {
                                s+="L+";
                                del_l--;
                                l++;
                            }
                    }
                    else
                    {
                        if(l-1==r)
                         {
                                    s+="R-";
                                    del_r--;
                                    r--;
                         }
                         else
                            {
                                s+="L-";
                                del_l--;
                                l--;
                            }
                    }


                }
                 for(j=0;j<del_r;j++)
                {

                    if(r2>r)
                            s+="R+";
                    else
                        s+="R-";
                }
                l=l2;
                r=r2;

            }
            cout<<ans<<endl;
            cout<<s<<endl;
   }

return 0;
}
