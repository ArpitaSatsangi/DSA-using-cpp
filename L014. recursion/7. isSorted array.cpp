#include <iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    //base case
    if(n==0 || n==1)
        return true;
    if(arr[0]>arr[1])
        return false;

    //recursive condition
    else
        return isSorted(arr+1,n-1);

}

int main()
{
    int arr[5]={1,7,5,2,6};
    int n=5;

    bool ans=isSorted(arr,n);
    if(ans==true)
        cout<<"array is sorted."<<endl;
    else
        cout<<"array is not sorted."<<endl;

    return 0;
}
