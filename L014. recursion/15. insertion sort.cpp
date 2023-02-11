#include <iostream>
using namespace std;

void InsertionSort(int *arr,int i,int n)
{
    if(n==0 || n==1)
        return ;

    int temp=arr[i];
    int j=i-1;

    for(;j>=0;j--)
    {
        if(arr[j]>temp)
        {
            arr[j+1]=arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j+1]=temp;


    InsertionSort(arr,i+1,n-1);
}

int main()
{
    int arr[5]={8,7,6,3,2};

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    InsertionSort(arr,1,5);

    cout<<endl<<endl<<"Sorted array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}
