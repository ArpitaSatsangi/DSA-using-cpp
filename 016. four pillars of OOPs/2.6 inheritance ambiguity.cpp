#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout<<"D and A"<<endl;
    }
};


class B
{
    public:

    void print()
    {
        cout<<"D and B"<<endl;
    }

};

class D : public A , public B
{
    public:

    D()
    {
        cout<<"in D~~~~~"<<endl;
    }

};

int main()
{
    D object;

    object.A::print();
    object.B::print();

    return 0;
}
