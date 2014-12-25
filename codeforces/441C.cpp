#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int k=0,m,l=0,L,n,i,R,C,s,K;
int spiralPrint()
{
    //int i, k = 0, l = 0;

    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
    int c=0;
    s=m*n;L=K;
int     pos=(s/L);
    s-= (s/L);
    L--;
    cout<<pos<<" ";
    while (k < m && l < n)
    {

        for (i = l; i < n; ++i)
        {
           // printf("%d ", a[k][i]);
           if(c<pos)
           {
               cout<<k+1<<" "<<i+1<<" ";
               c++;
           }
           else
            {
                cout<<endl;
                if(L>=1)
                {
                    pos=(s/L);
                    cout<<pos<<" ";
                    s-= (s/L);
                    L--;

                    c=0;
                    i--;
                }
                else
                    return 0;
            }
        }
        k++;

        for (i = k; i < m; ++i)
        {
            //printf("%d ", a[i][n-1]);
            if(c<pos){
            cout<<i+1<<" "<<n<<" ";
            c++;}
           else
            {
                cout<<endl;
                if(L>=1)
                {
                    pos=(s/L);
                    s-= (s/L);
                    cout<<pos<<" ";
                    L--;
                    c=0;
                    i--;
                }
                else
                    return 0;
            }        }
        n--;

        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                //printf("%d %d", a[m-1][i]);
                if(c<pos){
                cout<<m<<" "<<i+1<<" ";
                c++;
                }
             else
            {
                cout<<endl;
                if(L>=1)
                {
                    pos=(s/L);
                    s-= (s/L);
                    cout<<pos<<" ";
                    L--;
                    c=0;
                    i++;
                }
                else
                    return 0;
            }
            }
            m--;
        }

        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
               // printf("%d ", a[i][l]);
                if(c<pos){
                cout<<i+1<<" "<<l+1<<" ";
                c++;}
             else
            {
                cout<<endl;
                if(L>=1)
                {
                    pos=(s/L);
                    s-= (s/L);
                    cout<<pos<<" ";
                    L--;
                    c=0;
                    i++;
                }
                else
                    return 0;
            }}
            l++;
        }
    }
}
int main()
{

   cin>>m>>n>>K;
   /*R=m;
   C=n;
   s=m*n;
   for(int l=K;l>=1;l--)
   {
        cout<<(s/l)<<" ";
        int pos=(s/l);
        s-= (s/l);

        spiralPrint(pos);
        cout<<endl;
   }*/
   spiralPrint();

return 0;
}
