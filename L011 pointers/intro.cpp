#include <iostream>
using namespace std;

int main()
{
    int a=8;
    int *ptr=&a;

    cout<<"value of a = "<<a<<endl;
    cout<<"value of a = "<<*ptr<<endl<<endl;

    cout<<"address of a = "<<&a<<endl;
    cout<<"address of a = "<<ptr<<endl;

}
