    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    struct node
    {
        int data;
        node *l,*r;
    };
    node* ip(int data)
    {
        node *n=(node*)malloc(sizeof(node));
        n->data = data;
        n->l=NULL;
        n->r=NULL;

        return n;
    }
    int main()
    {
        node* head=ip(1);
        head->l=ip(2);
        head->r=ip(3);
        head->l->l=ip(4);

        return 0;
    }

