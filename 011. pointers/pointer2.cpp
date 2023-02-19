#include <iostream>
using namespace std;

int main()
{
    int i=3;
    int *p=0;
    p=&i;

    cout<<"value of i before = "<<*p<<endl;
    *p=(*p)*4;
    cout<<"value of i after = "<<i<<endl<<endl<<endl;

    //copying a pointer
    int *q=p;
    cout<<q<<" - "<<p<<endl;
    cout<<*q<<" - "<<*p<<endl<<endl<<endl;


    //increment pointer
    cout<<"value of p before = "<<p<<endl;
    p++;
    cout<<"value of p after = "<<p<<endl<<endl;

    return 0;
}
