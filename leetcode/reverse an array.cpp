#include <iostream>
//#include <array>
using namespace std;

void reversearray(int a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
}

int main()
{
    int a[6]={6,5,4,3,2,1};
    cout<<"before:  ";
    for (int i=0;i<6;i++)
    {
        cout<<a[i]<<"  ";
    }

    reversearray(a,6);
    cout<<endl<<"after:  ";
    for (int i=0;i<6;i++)
    {
        cout<<a[i]<<"  ";
    }

    return 0;
}
