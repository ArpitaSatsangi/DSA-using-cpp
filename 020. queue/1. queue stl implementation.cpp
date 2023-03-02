#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;

    q.push(3);
    cout<<"front is "<<q.front()<<endl;
    q.push(4);
    cout<<"front is "<<q.front()<<endl;
    q.push(9);
    cout<<"front is "<<q.front()<<endl;
    q.push(15);
    cout<<"front is "<<q.front()<<endl<<endl;
    cout<<"size of queue is "<<q.size()<<endl;


    q.pop();
    q.pop();
    q.pop();
    q.pop();

    cout<<"after deletion:  ";
    if(q.empty())
        cout<<"queue is empty"<<endl;
    else
        cout<<"queue is not empty"<<endl;

    return 0;
}
