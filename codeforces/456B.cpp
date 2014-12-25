#include<bits/stdc++.h>
using namespace std;
void process(){
    string n;
    cin>>n;
    if(n=="0")cout<<4;
    else {
        int t=1,p=n[n.length()-1]-'0';
        long long s=0;
        for(int i=0;i<n.length();i++)s+=n[i]-'0';
        if(s%4==1)t=(1+2+3+4)%5;
        else if(s%4==2)t=(1+4+9+6)%5;
        else if(s%4==3)t=(1+8+7+4)%5;
        else t=(1+6+1+6)%5;
        cout<<t;
    }
}
int main(){
    process();
    return 0;
}
