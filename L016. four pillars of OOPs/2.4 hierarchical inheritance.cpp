/*
In hierarchical inheritance, one class serves as a base class for more
than one derived class.
*/
#include <iostream>
using namespace std;

class A
{
    public:
    int color;

    void AA()
    {
        cout<<"inside class A"<<endl;
    }

};

class B : public A
{
    public:
    int name;

    void BB()
    {
        cout<<"inside class B"<<endl;
    }

};

class C : public A
{
    public:
    int age;

    void CC()
    {
        cout<<"inside class C"<<endl;
    }

};


int main()
{
    A x1;
    B x2;
    C x3;

    cout<<"A:"<<endl;
    x1.AA();

    cout<<endl<<"B:"<<endl;
    x2.AA();
    x2.BB();

    cout<<endl<<"C:"<<endl;
    x3.AA();
    x3.CC();


    return 0;
}
