#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node * next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

node * reverse(node * &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node *smallerhead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return smallerhead;
}


void insertStart(node * &head,int d)
{
    //new node is created
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}

void insertTail(node * &tail,int d)
{
    node *temp=new node(d);
    tail->next=temp;
    tail=temp;
}

void traverse(node * head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{

    node *n1=new node(1);
    node *head=n1;
    node *tail=n1;

    insertStart(head,4);
    insertStart(head,0);

    insertTail(tail,3);
    insertTail(tail,9);

    traverse(head);

    node *neww = reverse(head);
    traverse(neww);

    return 0;
}

