#include <iostream>
using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
}

void updatepointer(int *p)
{
    p=p+1;
    cout<<"inside: "<<*p<<endl;
}

void updatevalue(int *p)
{
    (*p)++;
}

int sum(int arr[],int n)
{
    //in function parameters,  arr[]==*arr
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    return sum;
}

int main()
{
    int i=9;
    int arr[6]={1,2,3,4,5,6};
    int *p=&i;

    cout<<"before: "<<p<<endl;
    updatepointer(p);
    cout<<"after: "<<p<<endl<<endl<<endl;

    cout<<"before: "<<*p<<endl;
    updatevalue(p);
    cout<<"after: "<<*p<<endl;

    cout<<endl<<"sum is: "<<sum(arr+3,3);

    return 0;
}
