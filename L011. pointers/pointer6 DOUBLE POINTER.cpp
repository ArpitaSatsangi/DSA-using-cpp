#include <iostream>
using namespace std;

int main()
{
    int i=15;
    int *ptr=&i;
    int **doubleptr=&ptr;

    cout<<"value: "<<i<<" - "<<*ptr<<" - "<<**doubleptr<<endl;

    cout<<"pointer address: "<<ptr<<" - "<<&i<<" - "<<*doubleptr<<endl;
    cout<<"double pointer address: "<<doubleptr<<endl;

    return 0;
}
