#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node * next;
    node * prev;


    //constructor
    node (int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

    ~node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }

};

void print(node * &head)
{
    if(head==NULL)
    {
        cout<<"list is empty."<<endl;
        return ;
    }

    node *temp=head;
    cout<<endl<<endl;

    while(temp!=NULL)
    {
        cout<< temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;

}

int getlength(node * &head)
{
    int c=0;

    node *temp=head;

    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }

    return c;
}

void insertAtHead(node * &head,node * &tail,int d)
{
   if(head==NULL)
   {
       node *temp=new node(d);
       head=temp;
       tail=temp;
   }
   else
   {
       node *temp=new node(d);
       head->prev=temp;
       temp->next=head;
       head=temp;

   }
}

void insertAtTail(node * &head,node * &tail,int d)
{
   if(tail==NULL)
   {
       node *temp=new node(d);
       head=temp;
       tail=temp;
   }
   else
   {
       node *temp=new node(d);
       temp->prev=tail;
       tail->next=temp;
       tail=temp;

   }
}

void insertAtPosition(int pos,node * &head,node * &tail,int d)
{
   if(pos==1)
   {
       insertAtHead(head,tail,d);
       return;
   }

   node *temp=head;
   int c=1;
   while(c<pos-1)
   {
       temp=temp->next;
       c++;
   }

   if(temp->next==NULL)
   {
       insertAtTail(head,tail,d);
       return;
   }

   node *nodeToInsert=new node(d);
   nodeToInsert->next=temp->next;
   nodeToInsert->next->prev=nodeToInsert;
   nodeToInsert->prev=temp;
   temp->next=nodeToInsert;

}

void deleteNode(int pos,node * &head)
{
    if(pos==1)
    {
        node *temp=head;
        temp->next->prev=NULL;
        temp->next=NULL;
        head=temp->next;
        delete temp;
    }
    else
    {
        node *prev=NULL;
        node *current=head;
        int c=1;

        while(c<pos)
        {
            prev=current;
            current=current->next;
            c++;
        }

        current->next->prev=current->prev;
        current -> prev = NULL;
        prev -> next = current -> next;
        current -> next = NULL;

        delete current;
    }
}



int main()
{
    node *head=NULL;
    node *tail=NULL;

    print(head);
    cout<<"length is "<<getlength(head)<<endl;


    insertAtHead(head,tail, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(head, tail,13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(head, tail,8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(head,tail, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;


    insertAtPosition( 2,head,tail,  100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(1, head, tail, 101);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition( 7, head,tail, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(6, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;



    return 0;
}
