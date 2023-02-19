#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot=arr[s];

    int counts=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            counts++;
        }
    }


    int PivotIndex=s+counts;
    swap(arr[PivotIndex],arr[s]);


    int i=s;
    int j=e;

    while(i<PivotIndex && j>PivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i<PivotIndex && j>PivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }

    }

    return PivotIndex;
}

void QuickSort(int *arr,int s,int e)
{
    if (s>=e)
        return ;

    int p=partition(arr,s,e);

    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}

int main()
{
    int arr[10] = {6,2,1,3,8,7,2,3,6,0};
    int n = 10;

    cout<<"before:  "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    QuickSort(arr,0,n-1);

    cout<<endl<<endl<<"after:  "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
