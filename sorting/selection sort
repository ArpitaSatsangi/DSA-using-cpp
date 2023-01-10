#include <iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{
    int minIndex;
    for(int i=0;i<n-1;i++)
    {
        minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);

    }

}

int main()
{
    int arr[5]={8,9,3,2,5};
    cout<<"before :     ";
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    SelectionSort(arr,5);

    cout<<endl<<"after  :     ";
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}
