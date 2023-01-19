#include <iostream>
using namespace std;

int found(int a[3][3],int key,int n,int m)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(a[i][j]==key)
            {
                return 1;
            }
        }
    }

    return 0;
}


void colsum(int a[3][3],int n,int m)
{
    for(int i=0;i<2;i++)
    {
        int sum=0;
        for(int j=0;j<2;j++)
        {
            sum+=a[i][j];
        }
        cout<<"col "<<i+1 <<" sum: "<<sum<<"    ";
    }
}

void sum(int a[3][3],int n,int m)
{
    int sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum+=a[i][j];
        }
    }

    cout<<endl<<"sum is "<<sum<<endl;
}


int main()
{
    int a[3][3],flag=0;

    cout<<"enter:"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"printing :"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }


    sum(a,3,3);
    colsum(a,3,3);

    flag=found(a,4,3,3);
    if(flag==1)
        cout<<endl<<"4 is found"<<endl;
    else
        cout<<endl<<"4 is not found"<<endl;



    return 0;
}
