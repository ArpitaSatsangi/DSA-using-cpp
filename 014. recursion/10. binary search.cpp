#include <iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int k)
{
    //base case
    if(s>e || e<s)
        return -1;

    int mid=(e+s)/2;

    if(arr[mid]==k)
        return mid;

    //recursive condition
    else if(arr[mid]>k)
        return binarySearch(arr,s,mid-1,k);

    else
        return binarySearch(arr,mid+1,e,k);


}

int main()
{
    int arr[5]={2,5,8,10,15};
    int n=5;
    int k=15;

    cout<<"PRINTING ARRAY....."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }


    int ans=binarySearch(arr,0,n-1,k);
    if(ans!= -1)
        cout<<endl<<endl<<"key "<<k<<" is present at index "<<ans<<endl;
    else
        cout<<endl<<endl<<"key "<<k<<" is not present."<<endl;

    return 0;
}
