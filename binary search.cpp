#include <iostream>
using namespace std;

int bs(int a[],int n,int key)
{
    int s=0,e=n-1;

    while(s<=e)
    {
        int m=(s+e)/2;

        if(a[m]==key)
        {
            return m;
        }
        else if(a[m]<key)
        {
            s=m+1;
        }
        else
        {
            e=m-1;
        }
    }
    return -1;
}

int main()
{
    //pointers~~~~~
    int a=20;
    int *p=&a;
    int **r=&p;

    cout<<"a is  "<<a <<endl;
    cout<<"p is  "<<p <<" ___ "<<&a<<endl;
    cout<<"r is  "<<r<<" _____ "<<&p<<endl;

}

/*
int main()
{
    int arr[5]={2,4,6,8,11};
    int ans=bs(arr,5,9);
    if(ans==-1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"found at " <<ans<<endl;
    }

    int an=bs(arr,5,11);
    if(an==-1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"found at position  " <<an+1<<endl;
    }
}
*/
