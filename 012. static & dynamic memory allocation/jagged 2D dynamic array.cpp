//A jagged array is an array that can have a
//different number of columns in each of its rows.

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<"enter no. of rows:  ";
    cin>>row;

    int *colno=new int [row];
    int ** arr=new int * [row];

    for(int i=0;i<row;i++)
    {
        cout<<"enter no. of columns for row " <<i+1 <<" :  ";
        cin>>colno[i];
        arr[i] = new int[colno[i]];
    }

    cout<<endl<<endl<<"ENTER:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colno[i];j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl<<endl<<"PRINTING:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colno[i];j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<"DEALLOCATING....."<<endl;
    for(int i=0;i<row;i++)
    {
        delete []arr[i];
    }

    delete []arr;


    return 0;
}
