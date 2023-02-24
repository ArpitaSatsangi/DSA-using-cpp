#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }

};

node * kreverse(node * &head,int k)
{
    if(head==NULL)
    {
        return NULL;
    }

    node *next=NULL;
    node *current=head;
    node *prev=NULL;
    int count=0;

    while(current!=NULL && count<k)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }

    if(next!=NULL)
        head->next=kreverse(next,k);


    return prev;
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
    insertStart(head,5);
    insertStart(head,7);

    insertTail(tail,3);
    insertTail(tail,6);
    insertTail(tail,9);
    insertTail(tail,2);

    traverse(head);//7 5 0 4 1 3 6 9 2

    node *newww = kreverse(head,3);
    cout<<endl<<"group of three:"<<endl;
    traverse(newww);//0 5 7 3 1 4 2 9 6

    return 0;
}


