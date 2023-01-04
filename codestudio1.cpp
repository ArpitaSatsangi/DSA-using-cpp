#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int firstOcc(vector<int>& arr,int n,int k)
{
    int ans=-1;
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<k)//right
        {
            s=mid+1;
        }
        else if(arr[mid]>k)//left
        {
            e=mid-1;
        }
    }

    return ans;
}

int lastOcc(vector<int>& arr,int n,int k)
{
    int ans=-1;
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<k)//right
        {
            s=mid+1;
        }
        else if(arr[mid]>k)//left
        {
            e=mid-1;
        }
    }

    return ans;
}


pair<int,int> firstAndLastPosition(vector<int>& arr,int n,int k)
{
    pair<int,int> p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);

    return p;
}


/*
int main()
{
    int a[8]={1,3,5,5,5,5,7,8};

    cout<<"first occ of 5 at index "<<firstOcc(a,8,5)<<endl;
    cout<<"last occ of 5 at index "<<lastOcc(a,8,5);

    return 0;
}
*/
