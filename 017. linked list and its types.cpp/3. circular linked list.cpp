#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;


    //constructor
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }

    ~node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};


//insert new node after 'element'
void insertNode(node* &tail, int element, int d)
{
    if(tail==NULL)
    {
        node *temp=new node(d);
        tail=temp;
        temp->next=temp;

    }

    else
    {
        node *current=tail;

        while(current->data!=element)
        {
            current=current->next;
        }

        node *newnode=new node(d);
        newnode->next=current->next;
        current->next=newnode;

    }
}

void print(node *tail)
{
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }

    node *temp=tail;
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

void deleteNode(node *tail, int value)
{
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }

    else
    {
        node *prev=tail;
        node *current=prev->next;

        while(current->data!=value)
        {
            prev=current;
            current=current->next;
        }

        prev->next=current->next;

        //only one node
        if(prev==current)
        {
            tail=NULL;
        }

        //only two nodes
        else if(tail==current)
        {
            tail=prev;
        }


        current->next=NULL;
        delete current;
    }
}


int main()
{
    node *tail=NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    deleteNode(tail, 10);
    print(tail);

    return 0;
}
