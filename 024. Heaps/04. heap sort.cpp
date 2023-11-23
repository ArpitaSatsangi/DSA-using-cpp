#include <iostream>
using namespace std;

void heapify(int arr[], int i,int n)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<=n && arr[largest] < arr[left])
    {
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right])
    {
        largest=right;
    }

    if(largest!=i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr,largest,n);
    }
}

void heapSort(int arr[], int n)
{
    int sizee=n;

    while(sizee>1)
    {
        swap(arr[sizee],arr[1]);
        sizee--;
        heapify(arr,1,sizee);
    }
}


int main()
{
    int arr[6]={-1, 54,53,55,52,50};
    int  n = 5;

    for(int i=n/2; i>0;i--)
    {
        heapify(arr,i,n);
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<endl;
    //55  53  54  52  50


    heapSort(arr,n);

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    //50  52  53  54  55

    return 0;
}
