#include <iostream>
using namespace std;
//stack-static memory allocation
//heap-dynamic memory allocation

int getsum(int *arr,int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];
    }
    return s;
}


int main()
{
    char *ch= new char;//create a char in heap
    int *a=new int[3];//create an array in heap

    delete ch;
    delete []a;



    int n;
    cout<<"enter n: ";
    cin>>n;

    int *arr=new int[n];//variable size array in heap

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"sum is "<<getsum(arr,n)<<endl;

    delete []arr;

    return 0;
}

