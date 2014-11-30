    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int i,x,n,z,c,j,total=0,maxprice=0,maxpiz=0,minprice=99999999,minpiz=0;
            cin>>x>>n;
            double combo[x+1],price[x+1],ppp[x+1];
            int demand[n+1];
            for(i=0;i<x;i++)
                {
                    cin>>combo[i];
                }
            for(i=0;i<x;i++)
                {
                    cin>>price[i];
                    ppp[i]=((price[i])/combo[i]);
                    if(price[i]>maxprice)
                    {
                        maxprice=price[i];
                        maxpiz=combo[i];
                    }
                    if(price[i]<minprice)
                    {
                        minprice=price[i];
                        minpiz=combo[i];
                    }
                    //cout<<ppp[i]<<" *";
                }
             for(i=0;i<n;i++)
             {
                 cin>>demand[i];
                 total+=demand[i];
             }
        for (int j = 1; j < x; j++)
        {
            double key = ppp[j];
            double key1=price[j];
            double key2=combo[j];
            int i = j-1;
            //cout<<"#"<<ppp[i]<<" "<<key<<"#";
            while ( (i >=0 ) && ( ppp [i] > key ) )
             {
                    //cout<<"%"<<i<<"%";
                ppp [i+1] = ppp [i];
                price[i+1]=price[i];
                combo[i+1]=combo[i];
                i--;
             }
            ppp[i+1] = key;
            price[i+1]=key1;
            combo[i+1]=key2;
        }
         //for (int j = 0; j < x; j++)
           // cout<<combo[j]<<" ";
        int piz=total,max_price=0;
        for(i=x-1;i>=0;i--)
        {
            while(piz-combo[i]>=0)
            {
                piz-=combo[i];
                max_price+=price[i];
            }
        }

        if(piz>0)
        {
            while(piz>0)
            {
                piz -= maxpiz;
                max_price += maxprice;
            }
        }
        //cout<<max_price;
        piz=total;
        int min_price=0;

         for(i=0;i<=x-1;i++)
        {
            while(piz-combo[i]>=0)
            {
                piz-=combo[i];
                min_price+=price[i];
            }
        }

        if(piz>0)
        {
            while(piz>0)
            {
                piz -= minpiz;
                min_price += minprice;
            }
        }
        cout<<max_price-min_price;
        if(t)
            cout<<endl;
        }
    return 0;
    }
