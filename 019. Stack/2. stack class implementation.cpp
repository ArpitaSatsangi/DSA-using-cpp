#include <iostream>
using namespace std;

class stack
{
    public:
    //properties
    int *arr;
    int top;
    int size;

    //behaviour
    stack(int s)
    {
        this->size=s;
        arr = new int[size];
        top=-1;
    }

    void push(int ele)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=ele;
        }
        else
        {
            cout<<"stack overflow"<<endl;
        }

    }


    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"stack underflow"<<endl;
        }
    }

    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"stack underflow"<<endl;
            return -1;
        }
    }

    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

int main()
{
    stack s(5);

    s.push(1);
    s.push(11);
    s.push(111);
    s.push(1111);
    s.push(11111);

    cout<<"printing top ele: "<<s.peek()<<endl;

    s.pop();
    cout<<"printing top ele: "<<s.peek()<<endl;

    s.pop();
    cout<<"printing top ele: "<<s.peek()<<endl;

    s.pop();
    cout<<"printing top ele: "<<s.peek()<<endl<<endl;


    if(s.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"not empty"<<endl;
    }


    return 0;
}
