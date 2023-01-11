#include <iostream>
using namespace std;

void merged(int a[],int n,int b[],int m,int c[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;

        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
        }
        else
        {
            c[k]=b[j];
            i++;
            j++;
        }
        k++;
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m)
    {
        c[k]=b[j];
        j++;
        k++;
    }

}

int main()
{
    int a[3]={2,5,7};
    int b[4]={1,3,4,6};
    int c[7]={0};
    cout<<"1st:  ";

    for (int i=0;i<3;i++)
    {
        cout<<a[i]<<"  ";
    }

    cout<<endl<<"2nd:  ";
    for (int i=0;i<4;i++)
    {
        cout<<b[i]<<"  ";
    }

    merged(a,3,b,4,c);
    cout<<endl<<"merge:  ";
    for (int i=0;i<7;i++)
    {
        cout<<c[i]<<"  ";
    }

    return 0;
}
