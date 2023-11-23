#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cout<<"~~MAX HEAP~~"<<endl;

    priority_queue<int> pq;

    //maxheap
    pq.push(2);
    pq.push(4);
    pq.push(1);
    pq.push(5);
    pq.push(3);
    cout<<"size is "<<pq.size()<<endl;

    cout<<"top element is: "<<pq.top()<<endl;

    pq.pop();
    cout<<"top element is: "<<pq.top()<<endl;

    if(pq.empty())
    {
        cout<<"max heap is empty"<<endl;
    }
    else{
        cout<<"max heap is not empty"<<endl;
    }



    cout<<endl<<"~~MIN HEAP~~"<<endl;

    priority_queue<int, vector<int>, greater<int>> mh;

    //maxheap
    mh.push(2);
    mh.push(4);
    mh.push(1);
    mh.push(5);
    mh.push(3);
    cout<<"size is "<<mh.size()<<endl;

    cout<<"top element is: "<<mh.top()<<endl;

    mh.pop();
    cout<<"top element is: "<<mh.top()<<endl;

    if(mh.empty())
    {
        cout<<"min heap is empty"<<endl;
    }
    else{
        cout<<"min heap is not empty"<<endl<<endl;
    }

    return 0;
}

/*
~~MAX HEAP~~
size is 5
top element is: 5
top element is: 4
max heap is not empty

~~MIN HEAP~~
size is 5
top element is: 1
top element is: 2
min heap is not empty
*/
