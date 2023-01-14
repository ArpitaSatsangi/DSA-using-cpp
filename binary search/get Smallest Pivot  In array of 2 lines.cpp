#include <iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid] >= arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }

    return s;
}

int main()
{
    int arr[6]={3,4,6,7,1,2};
    cout<<"pivot (smallest number's index) is   "<<pivot(arr,6);

    return 0;
}
