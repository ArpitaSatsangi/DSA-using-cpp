#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl; //address
    cout<<ch<<endl; //entire sring- abcde

    char *c=&ch[0];
    cout<<c<<endl; //entire sring- abcde

    char as='u';
    char *a=&as;
    cout<<a<<endl;

    return 0;
}
