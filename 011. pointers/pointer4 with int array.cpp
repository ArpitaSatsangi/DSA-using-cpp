#include <iostream>
using namespace std;

int main()
{
    int arr[10]={};
    int *p=&arr[0];

    cout<<"size of array: "<<sizeof(arr)<<endl;
    cout<<"size of array element: "<<sizeof(*arr)<<endl;
    cout<<"size of address of element: "<<sizeof(&arr)<<endl;

    cout<<"size of pointer: "<<sizeof(p)<<endl;
    cout<<"size of array element: "<<sizeof(*p)<<endl;
    cout<<"size of address of pointer: "<<sizeof(&p)<<endl;

    cout<<"before: "<<p<<endl;
    p=p+1;
    cout<<"after: "<<p<<endl;

    return 0;
}
