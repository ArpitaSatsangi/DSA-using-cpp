#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;

    s.push(5);
    s.push(9);

    cout<<"before printing top ele: "<<s.top()<<endl;

    s.pop();
    cout<<"after printing top ele: "<<s.top()<<endl;

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
