    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int k,n;
        cin>>n>>k;
        int i,a[n+1],diff[n+1];
        map <int,int> M;
        int maxdiff=0,pos=0,d;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                if(i>0){
                diff[i]=a[i]-a[i-1];
                M[diff[i]]++;
                if(M[diff[i]]>maxdiff)
                {
                    maxdiff=M[diff[i]];
                    pos=i;
                    d=diff[i];
                }
                }
            }
        if(n>30)
        {
            int beg = a[pos] - d*pos;
            //cout<<beg<<"*"<<pos<<endl;
            for(i=0;i<n;i++)
                cout<<beg+ i*d<<" ";
        }
        else
        {
            int j;
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {

                }
            }
        }
        cin>>i;
    return 0;
    }
