#include <iostream>
using namespace std;

int main()
{
    int i=15;
    int *ptr=&i;
    int **doubleptr=&ptr;

    cout<<"value: "<<i<<" - "<<*ptr<<" - "<<**doubleptr<<endl;

    cout<<"value address: "<<ptr<<" - "<<&i<<" - "<<*doubleptr<<endl;

    cout<<"pointer address: "<<doubleptr<<" - "<<&ptr<<endl;

    cout<<"double pointer address: "<<&doubleptr<<endl<<endl;

    return 0;
}

