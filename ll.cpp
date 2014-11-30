    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    struct node
    {
        int data;
        node *next;
    };
    node* putl(int d)
    {
        node* n = (node*)malloc(sizeof(node));
        (n)->data = d;
        n->next = NULL;
    }
    void revers(node **head)
    {
        node *cur=*head,*nex,*prev=NULL;
        while(cur)
        {
         //   cout<<cur->data<<"--";
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        *head=prev;

    }
    void print(node *head)
    {
        while(head)
        {
            cout<<head->data<<"->";
            head=head->next;
        }
    }
    int main()
    {
        node *head = new node;
        head->data=1;
        //cout<<"#";
        node *l1,*l2,*l3,*l4,*l5;
        l1=putl(2);
        //l1 = new node;
        //l1->data=2;
        head->next = l1;
        cout<<"#";
        //print(head);
        //cout<<head->next->data;
        revers(&head);
        print(head);
        int u;
        cin>>u;
    return 0;
    }
