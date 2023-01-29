/*
C++ provides an inline functions to reduce the function call overhead.
Inline function is a function that is expanded in line when
it is called.
*/

#include <iostream>
using namespace std;

inline int getmax(int &a,int &b)
{
    return (a>b)?a:b;
}


int main()
{
    int a=3,b=1;

    cout<<"between "<<a<<" and "<<b <<" max is "<<getmax(a,b)<<endl;

    a=a+5;
    b=b+3;
    cout<<"between "<<a<<" and "<<b <<" max is "<<getmax(a,b)<<endl;

    return 0;
}
