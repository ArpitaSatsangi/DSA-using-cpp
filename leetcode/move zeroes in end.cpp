#include <iostream>
using namespace std;

void movezeroes(int a[],int n)
{
    int i=0;

        for(int j=0;j<n;j++)
        {
            if(a[j]!=0)
            {
                swap(a[i],a[j]);
                i++;
            }

        }
}

void print(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}

int main()
{
    int a[7]={0,2,0,0,5,1,9};

    cout<<"before:  ";
    print(a,7);


    movezeroes(a,7);
    cout<<endl<<"after:  ";
    print(a,7);

    return 0;
}
