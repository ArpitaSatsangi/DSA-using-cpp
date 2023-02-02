#include <iostream>
using namespace std;

int getSum(int arr[],int n)
{
    //base case
    if(n==0)
        return 0;
    if(n==1)
        return arr[1];


    //recursive condition
    return arr[0] + getSum(arr+1,n-1);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;

    cout<<"sum of array elements is "<<getSum(arr,n)<<endl;

    return 0;
}
