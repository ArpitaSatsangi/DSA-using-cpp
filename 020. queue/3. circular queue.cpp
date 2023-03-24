#include <iostream>
using namespace std;

class circular_queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:

    circular_queue(int n)
    {
        size=n;
        arr=new int[size];
        front=rear=-1;
    }

    bool enqueue(int val)
    {
        if( (front==0 && rear==size-1) || (rear==(front-1)%(size-1)))
        {
            cout<<"queueu is full"<<endl;
            return false;
        }

        else if(front==-1&&rear==-1)//first ele
        {
            front=rear=0;
        }

        else if(rear==size-1 && front!=0)//few starting ele are deleted and rear is at last
        {
            rear=0;
        }

        else//normal case
        {
            rear++;
        }

        arr[rear]=val;
        return true;
    }

    int dequeue()
    {

        if(front==-1 && rear==-1)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }

        int x=arr[front];
        arr[front]=-1;

        if(front==rear)
        {
            front=rear=-1;
        }

        else if(front==size-1)
        {
            front=0;
        }

        else
        {
            front++;
        }
        return x;
    }

};


int main()
{

}
