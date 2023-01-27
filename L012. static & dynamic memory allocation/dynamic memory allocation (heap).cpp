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
    /*
    char c='h';
    char *cv=&c;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(cv)<<endl;

    char *ch= new char;//create a char in heap
    int *arr=new int[3];//create an array in heap
    */

    int n;
    cin>>n;

    int*arr=new int[n];//variable size array in heap

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"sum is "<<getsum(arr,n)<<endl;

    return 0;
}
