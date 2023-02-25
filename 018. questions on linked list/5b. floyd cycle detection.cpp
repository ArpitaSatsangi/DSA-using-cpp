#include <iostream>
#include <map>
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

bool floyd_detect_cycle(node *head)
{
    if(head==NULL)
        return false;

    node *slow=head;
    node *fast=head;

    while(slow!=fast && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }

        slow=slow->next;
    }

    if(slow==fast)
    {
        return true;
    }

    return false;
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

    traverse(head);

    tail->next=head->next;//cycle creation

    if(floyd_detect_cycle(head))
    {
        cout<<"yes there is a cycle present."<<endl;
    }
    else
    {
        cout<<"no there is no cycle present."<<endl;
    }

    return 0;
}



