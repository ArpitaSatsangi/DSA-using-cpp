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

node * floyd_detect_cycle(node *head)
{
    if(head==NULL)
        return NULL;

    node *slow=head;
    node *fast=head;

    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }

        slow=slow->next;

        if(slow==fast)
        {
            return slow;
        }
    }

    return NULL;
}

node *get_starting_node(node *head)
{
    if(head==NULL)
        return NULL;

    node *intersection= floyd_detect_cycle(head);

    if(intersection == NULL)
        return NULL;


    node *slow=head;

    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;
}

void remove_cycle(node *head)
{
    if(head==NULL)
        return ;

    node *startofcycle= get_starting_node(head);

    node *temp=startofcycle;

    while(temp->next!=startofcycle)
    {
        temp=temp->next;
    }

    temp->next=NULL;

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

    if(floyd_detect_cycle(head) != NULL)
    {
        cout<<"YESS cycle present!!"<<endl;
    }
    else
    {
        cout<<"NO cycle present!!"<<endl;
    }

    node *cycle = get_starting_node(head);
    cout<<endl<<"cycle starts at "<<cycle->data<<endl;

    remove_cycle(head);
    traverse(head);

    return 0;
}




