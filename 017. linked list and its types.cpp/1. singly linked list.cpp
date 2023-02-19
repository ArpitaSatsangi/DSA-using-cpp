#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node * next;

    //constructor
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

    ~node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

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

void insertAtPosition(node * &head,node * &tail,int pos,int d)
{
    if(pos==1)
    {
        insertStart(head,d);
        return;
    }

    node *temp=head;
    int count=1;

    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL)
    {
        insertTail(tail,d);
        return;
    }

    node *nodeToInsert=new node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;

}


void deleteNode(int pos, node * &head)
{
    node *temp=head;
    if(pos==1)
    {
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        node *prev=NULL;
        int c=1;

        while(c<pos)
        {
            prev=temp;
            temp=temp->next;
            c++;
        }

        prev->next=temp->next;
        temp->next=NULL;
        delete temp;

    }
}


void traverse(node * &head)
{
    if(head==NULL)
    {
        cout<<"list is empty."<<endl;
        return ;
    }

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
    node *n1=new node(10);
    node *head=n1;
    node *tail=n1;

    insertStart(head,4);
    insertStart(head,1);

    insertTail(tail,30);
    insertTail(tail,111);

    insertAtPosition(head,tail,3,55);

    traverse(head);

    deleteNode(6,head);
    deleteNode(3,head);
    deleteNode(1,head);

    traverse(head);

    return 0;
}

