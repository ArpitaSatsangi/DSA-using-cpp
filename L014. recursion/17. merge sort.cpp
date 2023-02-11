#include <iostream>
using namespace std;

void merged(int *arr,int s,int e)
{
    int m=(s+e)/2;

    int len1=m-s+1;
    int len2=e-m;

    int *first=new int[len1];
    int *second=new int[len2];

    int mainArrayIndex = s;//k-main array index
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=m+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }


    //merge two array
    int  a=0;
    int b=0;
    mainArrayIndex=s;

    while(a<len1 && b<len2)
    {
        if(first[a]<second[b])
        {
            arr[mainArrayIndex++]=first[a++];
        }
        else
        {
            arr[mainArrayIndex++]=second[b++];
        }
    }

    while(a<len1)
    {
        arr[mainArrayIndex++]=first[a++];
    }

    while(b<len2)
    {
        arr[mainArrayIndex++]=second[b++];
    }


    delete []first;
    delete []second;
}

void MergeSort(int *arr,int s,int e)
{
    if(s>=e)
    {
        return ;
    }

    int m=(s+e)/2;
    MergeSort(arr,s,m);
    MergeSort(arr,m+1,e);

    merged(arr,s,e);

}

int main()
{
    int arr[15]={3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n=15;
    cout<<"before :     ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    MergeSort(arr,0,n-1);

    cout<<endl<<"after  :     ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}

