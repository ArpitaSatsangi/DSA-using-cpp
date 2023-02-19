#include <iostream>
using namespace std;

void SelectionSort(int *arr,int minIndex, int n)
{
    if(n==0 || n==1)
        return ;


    int i=minIndex;
    for(int j=minIndex;j<n;j++)
    {
        if(arr[minIndex]>arr[j])
        {
            minIndex=j;
        }
    }
    swap(arr[minIndex],arr[i]);

    SelectionSort(arr,minIndex+1,n-1);
}


int main()
{
    int arr[8]={4,2,1,5,6};

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    SelectionSort(arr,0,5);

    cout<<endl<<endl<<"Sorted array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}
