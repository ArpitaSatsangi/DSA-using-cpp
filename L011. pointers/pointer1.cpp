#include <iostream>
using namespace std;

int main()
{
    int a=8;
    int *ptr=&a;

    cout<<"value of a = "<<a<<endl;
    cout<<"value of a = "<<*ptr<<endl;
    cout<<"size of a = "<<sizeof(a)<<endl<<endl;

    cout<<"address of a = "<<&a<<endl;
    cout<<"address of a = "<<ptr<<endl;
    cout<<"size of pointer = "<<sizeof(ptr)<<endl<<endl<<endl;

    double d=1.5;
    double *p2=&d;

    cout<<"value of d = "<<d<<endl;
    cout<<"value of d = "<<*p2<<endl;
    cout<<"size of d = "<<sizeof(d)<<endl<<endl;

    cout<<"address of d = "<<&d<<endl;
    cout<<"address of d = "<<p2<<endl;
    cout<<"size of pointer = "<<sizeof(p2)<<endl<<endl<<endl;


    return 0;

}
