    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    class B
     {
        public:
            int bata;

            void read(){cout<<"bata=";cin>>bata;}
            void write(){cout<<"bata:="<<bata<<endl;}

     };
    class A:public B
    {
        int data;
        static int x;
        public:
        void read()
        {
            cout<<"data=";
            cin>>data;
        }
        void write()
        {
            cout<<"Data="<<data<<endl;
        }
        static void check(int c)
        {
            c++;
        }
        static A ADD(A &a,B &b)
        {
            cout<<"SUM="<<a.data+b.bata<<endl;
            A tmp;
            tmp.data= a.data+b.bata;

            return tmp;
        }
    };
    int main()
    {
        int *p;
        int siz=100;
        p = new int[siz];
        delete p;
        class A obj,C;
        B boj;
        obj.read();
        obj.write();

        boj.read();
        boj.write();

        obj.B::write();

        C=A::ADD(obj,boj);
        C.write();
            int i;
    cin>>i;
    return 1;
    return 0;
    }
