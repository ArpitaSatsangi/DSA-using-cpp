#include <iostream>
using namespace std;

int main()
{
    int ch;
    float c,f;
    while(1)
    {
        cout <<"\n1.celcius to faren\n2.faren to celc\n3.exit\nenter your choice: ";
        cin >> ch;
        if(ch==1)
        {
            cin >>c;
            f=1.8*(c) +32.0;
            cout <<"\n" <<f;
        }
        else if(ch==2)
        {
            cin >>f;
            c=0.5556*(f-32.0);
            cout <<"\n" <<c;
        }
        else
        {
            cout <<"\n" <<"out";
            break;
        }
    }

}
