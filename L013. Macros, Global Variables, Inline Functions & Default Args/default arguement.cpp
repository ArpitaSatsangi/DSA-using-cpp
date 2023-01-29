#include <iostream>
using namespace std;

void print(int arr[],int n,int start=0)//start is default argument
{
    cout<<endl<<"PRINTING...."<<endl;
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6};

    print(arr,6);
    cout<<endl<<endl;
    print(arr,6,4);

    return 0;
}
