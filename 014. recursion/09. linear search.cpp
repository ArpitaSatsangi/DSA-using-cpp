#include <iostream>
using namespace std;

bool linearSearch(int arr[],int n,int k)
{
    //base case
    if(n==0)
        return false;

    if(arr[0]==k)
        return true;

    //recursive condition
    else
        return linearSearch(arr+1,n-1,k);

}

int main()
{
    int arr[5]={1,7,5,2,6};
    int n=5;
    int k=2;

    cout<<"PRINTING ARRAY....."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }


    bool ans=linearSearch(arr,n,k);
    if(ans==true)
        cout<<endl<<endl<<"key "<<k<<" is present."<<endl;
    else
        cout<<endl<<endl<<"key "<<k<<" is not present."<<endl;

    return 0;
}

