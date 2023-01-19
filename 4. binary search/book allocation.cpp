#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid)
{
    int studentCount=1;
    int pages=0;

    for(int i=0;i<n;i++)
    {
        if(pages+arr[i]<=mid)
        {
            pages+=arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount>m || arr[i]>mid)
            {
                return false;
            }
            pages=arr[i];
        }

        if(studentCount>m)
        {
            return false;
        }
    }

    return true;
}



int allocateBooks(vector<int> arr, int n, int m)
{
    int sum=0,ans=-1;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }


    int s=0;
    int e=sum;
    int mid=(s+e)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans= mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

        mid=(s+e)/2;
    }

    return ans;
}
