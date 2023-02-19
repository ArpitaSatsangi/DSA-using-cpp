#include <iostream>
#include <string>
using namespace std;


string replaced(string &s)
{
    string temp="";

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('1');
            temp.push_back('5');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }

    return temp;
}



int main()
{
    string s="this is me";

    cout<<s<<endl;
    cout<<endl<<replaced(s)<<endl;

    return 0;
}
