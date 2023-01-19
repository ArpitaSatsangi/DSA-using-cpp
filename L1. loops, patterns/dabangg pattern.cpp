#include <iostream>
using namespace std;

int main()
{
    int o=1,n,i,j,k,l;
    cin>>n;

    while(o<=n)
    {
        i=1;

        while(i<=n-o+1)
        {
            cout<<i;
            i++;
        }

        k=o-1;
        while(k>0)
        {
           cout<<"**";
           k--;
        }

        j=n-o+1;
        while(j>0)
        {
            cout<<j;
            j--;
        }

        cout<<endl;
        o++;
    }
}
