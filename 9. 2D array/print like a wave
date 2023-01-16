#include <iostream>
using namespace std;

void printWAVE(int a[3][3],int n,int m)
{
    for(int i=0;i<n;i++)//column
    {
        if(i&1)
        {
            //odd- bottom to top
            for(int j=m-1;j>=0;j--)//row
            {
                cout<<a[j][i]<<"  ";
            }
        }
        else
        {
            //zero & even- top to bottom
            for(int j=0;j<m;j++)//row
            {
                cout<<a[j][i]<<"  ";
            }
        }
    }
}


int main()
{
    int a[3][3],flag=0;

    cout<<"enter:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"printing :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }


    cout<<endl<<endl;
    printWAVE(a,3,3);

    return 0;
}
