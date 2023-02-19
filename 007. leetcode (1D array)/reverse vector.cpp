#include <iostream>
#include <vector>
using namespace std;

vector <int> reversearray(vector <int> v)
{
    int s=0;
    int e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

int main()
{
    vector <int> v;
    
    v.push_back(16);
    v.push_back(15);
    v.push_back(45);
    v.push_back(31);
    v.push_back(24);
    v.push_back(61);
    
    
    cout<<"before:  ";
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }

    vector <int>  a=reversearray(v);
    
    cout<<endl<<"after:  ";
    for (int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"  ";
    }

    return 0;
}
