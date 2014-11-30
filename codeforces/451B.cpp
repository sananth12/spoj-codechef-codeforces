    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int i,arr[n],A[n];

        for(i=0;i<n;i++)
            {
                cin>>A[i];
                arr[i]=A[i];
            }
        sort(A,A+n);
        int l=0,r=0,x=0;
        for(i=0;i<n;i++)
        {
            if( x && A[i]!=arr[i])
                {
                    l=i;
                    x++;
                }
            else if(A[i]!=arr[i])
               {
                 r=i;
                 //cout<<A[i]<<" "<<arr[i]<<endl;
               }
        }
        int flag=0,r1=r;
        for(i=l;i<=r;i++,r1--)
        {

            if(A[i]!=arr[r1])
                {
                    // cout<<i<<" "<<r1;
                    flag=1;
                    break;
                }
        }
        if(!flag)
            cout<<"yes\n"<<l+1<<" "<<r+1;
        else
            cout<<"no";
    cin>>i;
    return 0;
    }
