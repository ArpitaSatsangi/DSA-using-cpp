#include <iostream>
using namespace std;

int main()
{
    int a,b,c,ch;
    char op;

    cout<<"enter two numbers: ";
    cin>>a>>b;

    cout<<"enter operator: "<<endl;
    cin>>op;

    switch(op)
    {
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '/': cout<<a/b;
        break;
        case '*': cout<<a*b;
        break;
        default: cout<<"wrong";
        break;

    }

}
