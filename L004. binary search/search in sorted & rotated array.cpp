#include <iostream>
#include <vector>
using namespace std;

int findPivot( vector<int>& arr,int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        int mid=(s+e)/2;

        if(arr[mid]>=arr[0])
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

int binarySearch(vector<int>& arr,int start,int enda, int k)
{
    int s=start,e=enda;
    int m=(s+e)/2;
    
    while(s<=e)
    {
        if(arr[mid]>k)
        {
            e=mid-1;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            return mid;
        }
        
        m=(s+e)/2;
    }
    
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot=findPivot(arr,n);
    if(arr[pivot]<=k && k<=arr[n-1])  
    {
        return binarySearch(arr,pivot,n-1,k);//2nd line
    }
    else
    {
        return binarySearch(arr,0,pivot-1,k);//1st line
    }
    
}
