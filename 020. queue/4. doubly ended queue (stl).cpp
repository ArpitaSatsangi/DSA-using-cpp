#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout<<d.front()<<endl;//12
    cout<<d.back()<<endl;//14

    d.pop_front();

    cout<<d.front()<<endl;//14
    cout<<d.back()<<endl;//14

    d.pop_back();

    if(d.empty())
    {
        cout<<"queue is empty"<<endl;//yess
    }
    else
    {
         cout<<"queue is not empty"<<endl;
    }


    return 0;
}
