/*
Hybrid inheritance is a combination of more than one type of inheritance.
For example, A child and parent class relationship that follows multiple and
hierarchical inheritances can be called hybrid inheritance
*/
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"inside class A"<<endl;
    }
};


class B
{
    public:

    B()
    {
        cout<<"inside class B"<<endl;
    }

};

class C : public A
{
    public:

    C()
    {
        cout<<"inside class C"<<endl;
    }

};

class D : public A , public B
{
    public:

    D()
    {
        cout<<"inside class D"<<endl;
    }

};

int main()
{
    D object;

    return 0;
}
