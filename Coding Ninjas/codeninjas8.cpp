// to find the middle element of a linked list:

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};

int n;

struct node *middle(struct node *start);
struct node *create(struct node *start);
struct node *addatend(struct node *start);

int main()
{
    struct node *start = NULL;

    while(1)
    {
        cout<<"1. Create\n2. Middle\n3. Exit\n";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1: 
                start = create(start);
                break;
            case 2:
                start = middle(start);
                break;
            case 3:
                exit(0);
            default:
                cout<<"Invalid choice\n";
        }
    }
    return 0;
}

struct node *create(struct node *start)
{
    cout<<"enter the number of nodes";
    cin>>n;
    struct node *ptr;
    for(int i=0;i<n;i++)
    {
        struct node *newnode = new node;
        cin>>newnode->data;
        newnode->link = NULL;
        if(start==NULL)
        {
            start = newnode;
            ptr = newnode;
        }
        else
        {
            ptr->link = newnode;
            ptr = newnode;
        }
    }
    return start;
}
struct node *middle(struct node *start)
{
    if(start == NULL)
    {
        cout<<"List is empty";
        return NULL;
    }
    int c=0;
    struct node *p = start;
    while(p!=NULL)
    {
        if(c==n/2)
        {
            cout<<p->data;
            break;
        }
        c++;
        p = p->link;
    }
    cout<<endl;
    return start;
}