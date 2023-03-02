#include <iostream>
#include <stdlib.h>
using namespace std;

class Queue
{
    public:
    int qfront;
    int rear;
    int *arr;
    int qsize;

    Queue()
    {
        qsize=10001;
        arr=new int[qsize];
        qfront=-1;
        rear=-1;
    }

    void enqueue(int ele)
    {
        if(rear==qsize)
        {
            cout<<"queue is full."<<endl;
            exit(1);
        }

        else
        {
            if(qfront==-1)
               qfront=rear=0;
            else
                rear++;

            arr[rear]=ele;
            cout<<ele<<" is inserted."<<endl;
        }

    }

    void dequeue()
    {
        if(qfront==-1 && rear==-1)
        {
            cout<<"queue is empty."<<endl;
            exit(1);
        }

        else
        {
            int temp=arr[qfront];
            qfront++;

            cout<<temp<<" is deleted."<<endl;
        }
    }

    void display()
    {
        if(qfront==-1 && rear==-1)
        {
            cout<<"queue is empty."<<endl;
            exit(1);
        }

        else
        {
            for(int i=qfront;i<=rear;i++)
            {
                cout<<arr[i]<<"  ";
            }
            cout<<endl<<endl;
        }
    }

    int frontfun()
    {
        if(qfront==-1 && rear==-1)
        {
            cout<<"queue is empty."<<endl;
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }


};

int main()
{
    Queue q;

    q.enqueue(1);
    cout<<"front is "<<q.frontfun()<<endl;
    q.display();

    q.enqueue(2);
    cout<<"front is "<<q.frontfun()<<endl;
    q.display();

    q.enqueue(3);
    cout<<"front is "<<q.frontfun()<<endl;
    q.display();

    q.dequeue();
    cout<<"front is "<<q.frontfun()<<endl;
    q.display();

    q.dequeue();
    cout<<"front is "<<q.frontfun()<<endl;
    q.display();

    q.dequeue();
    cout<<"front is "<<q.frontfun()<<endl;
    q.display();


    return 0;
}
