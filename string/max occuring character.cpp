#include <iostream>
#include <string>
using namespace std;

char max_occ_char(string s)
{
    int n, counted[26]={};

    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        int number = 0;
        n=ch-'a';
        counted[n]++;
    }

    int maxi=0;
    for(int i=1;i<26;i++)
    {
        if(counted[maxi] < counted[i])
        {
            maxi=i;
        }
    }

    return maxi+'a' ;
}


int main()
{
    string s;
    cout<<"enter:  ";
    cin>>s;

    cout<<max_occ_char(s)<<endl;
}
