    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            float i,x,p=0;
            cin>>x;
            for(i=1;i<=x;i++)
                p = p+(x/i);
            printf("%0.2f\n",p);
        }
    return 0;
    }
