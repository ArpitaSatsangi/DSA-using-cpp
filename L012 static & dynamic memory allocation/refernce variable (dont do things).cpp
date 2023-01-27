#include <iostream>
using namespace std;

int & function1(int n)
{
    int i=n;
    int &j=i;
    return j;
}

int * function2(int n)
{
   int *ptr= &n;
   return ptr;
}


int main()
{
    int n=3;

    function1(n);//warning

    function2(n);//warning

    int l;
    cin>>l;
    int arr[l]; //bad practice cause what if value of l is too size comparing to small stack size

    return 0;
}
