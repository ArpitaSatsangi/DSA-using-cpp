#include<iostream>
using namespace std;

int main()
{
    int a[7]={2,5,6,7,8,1,3};

    for(int i=0;i<=6;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    for(int i=0;i<=6;i=i+2)
    {
        if(i+1<=6)
        {
            swap(a[i],a[i+1]);
        }
    }

    for(int i=0;i<=6;i++)
    {
        cout<<a[i]<<"  ";
    }
}
