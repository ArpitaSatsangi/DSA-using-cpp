#include <iostream>
#include <bits/stdc++.h>
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

class Stack
{
    public:
    //properties
    node * top;

    Stack()
    {
        top=NULL;
    }

    void push(int ele)
    {
        node *temp = new node(ele);

        temp->data=ele;
        temp->next=top;

        top=temp;

    }

    bool isEmpty()
    {
        return top==NULL;
    }

    int peek()
    {
        if(!isEmpty())
        {
            return top->data;
        }
        else
        {
            exit(1);
        }
    }

    void display()
    {
        if(top==NULL)
        {
            cout<<"stack empty"<<endl;
            exit(1);
        }

        else
        {

        node *temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl;

        }
    }

    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack empty"<<endl;
            exit(1);
        }
        else
        {
            node *temp=top;
            top=top->next;
            cout<<temp->data<<" is deleted."<<endl;
            free(temp);
        }
    }

};

int main()
{
    Stack s;

    s.push(1);
    s.display();
    s.push(2);
    s.display();
    s.push(3);
    s.display();
    s.push(4);
    s.display();

    cout << "\nTop element is " << s.peek() << endl<<endl;

    s.pop();
    s.display();
    s.pop();
    s.display();




    return 0;
}
