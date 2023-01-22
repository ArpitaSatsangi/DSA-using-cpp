#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,4,8,15,18,23,56,77,98,100};

    cout<<"address of first memory block is:  "<<arr<<endl;
    cout<<arr<<endl;
    cout<<"address of first memory block is:  "<<&arr[0]<<endl;

    cout<<"1st element: "<<*arr<<endl;
    cout<<"1st element + 1: "<<*arr+1<<endl;
    cout<<"2nd element: "<<*(arr+1)<<endl;

    cout<<"4th element: "<<arr[3]<<endl;
    cout<<"4th element: "<<*(arr+3)<<endl;

    int i=6;
    cout<<"7th element: "<<i[arr]<<endl;

    return 0;
}
