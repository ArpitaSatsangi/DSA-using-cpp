#include <iostream>
using namespace std;

void ReverseString(string & s,int i,int j)
{
    if(i>j)
        return ;

    swap(s[i],s[j]);
    i++;
    j--;
    ReverseString(s,i,j);
}


int main()
{
    string s="abcde";

    cout<<s<<endl;
    ReverseString(s, 0, s.length()-1);
    cout<<s<<endl;

    return 0;
}
