#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter row & column: ";
    cin>>row>>col;

    int ** arr= new int *[row];

    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }//creation done

    cout<<endl<<"ENTER:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"PRINTING:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }


    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete []arr;//delete 2D array

    return 0;
}
