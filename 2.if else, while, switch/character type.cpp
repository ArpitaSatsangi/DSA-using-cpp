#include <iostream>
using namespace std;

int main()
{
    char ch;

    cin >> ch ;

    if('a'<=ch && ch<='z')
    {
        cout<<"lowercase" <<endl;
    }

    else if('A'<=ch && ch<='Z')
    {
        cout<<"uppercase" <<endl;
    }

    else if('0'<=ch && ch<='9')
    {
        cout<<"numbers" <<endl;
    }
    else
    {
        cout<<"special" <<endl;
    }

}
