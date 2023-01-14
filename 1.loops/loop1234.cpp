#include<iostream>
using namespace std;

int main()
{
    int i=1,n,space,tri1,tri2;
    cin>>n;

    while(i<=n)
    {
    space=n-i;
    tri1=1;
    tri2=i-1;
    while(space>0)
    {
        cout<<" ";
        space--;
    }
    while(tri1<=i)
    {
        cout<<tri1;
        tri1++;
    }
    while(tri2>0)
    {
        cout<<tri2;
        tri2-- ;
    }
    cout<<endl;
    i++;
    }

}
