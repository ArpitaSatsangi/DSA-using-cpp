#include <iostream>
using namespace std;

int scope=15;//global variable

void a(int &i)//reference variable
{
    cout<<endl<<"i in a: "<<i<<endl;
    cout<<"scope in a: "<<scope<<endl<<endl;
    scope++;//you can change the global variable in any function permanently
}

void b(int &i)//reference variable
{
    cout<<endl<<"i in b: "<<i<<endl;
    cout<<"scope in b: "<<scope<<endl<<endl;
}


int main()
{
    int i=5;

    cout<<"i in main: "<<i<<endl;
    cout<<"scope in main: "<<scope<<endl<<endl;

    a(i);
    b(i);

    return 0;
}
