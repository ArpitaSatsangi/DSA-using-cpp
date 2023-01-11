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

void print(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}

int main()
{
    int a[3]={2,5,7};
    int b[4]={1,3,4,6};
    int c[7]={0};

    int n=3,m=4;

    cout<<"1st:  ";
    print(a,n);

    cout<<endl<<"2nd:  ";
    print(b,m);

    merged(a,3,b,4,c);
    cout<<endl<<"merge:  ";
    print(c,m+n);

    return 0;
}
