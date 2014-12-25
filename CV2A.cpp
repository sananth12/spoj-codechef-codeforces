    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            string s;
            cin>>s;
            int extra=0,def=0,cost=0,i;
            int arr[30]={0},Size=s.length();
            for(i=0;i<Size;i++)
                arr[s[i]-'a']++;
            for(i=0;i<26;i++)
            {
                if(arr[i]>i+1)
                    extra+= arr[i]-i-1;
                if(arr[i]<i+1 && arr[i])
                    def+= i+1 - arr[i];


            }
//            cout<<def<<" "<<extra;

            if( !def && !extra)
                cout<<0;
            else
            {
                if(def>extra)
                {
                    cost = (extra)*1 + (def-extra)*2;
                }
                else if(def<extra)
                {
                    cost = def*1 + (extra-def)*3;
                }
                else
                cost = def;

                cout<<cost;
            }
            if(t)
                cout<<endl;
        }
    return 0;
    }
