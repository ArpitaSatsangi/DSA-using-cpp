/*
As the name suggests the name constants are given to
such variables or values in C/C++ programming language
which cannot be modified once they are defined. They are
fixed values in a program.
*/
#include <iostream>
using namespace std;

int main()
{
    const int a=3;
    cout<<"constant variable 'a' is "<<a<<endl;

    //a=a+3; error- assignment of read only variable 'a'

    return 0;
}
