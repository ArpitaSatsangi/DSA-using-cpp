#include <iostream>
using namespace std;

int main()
{
    int n,i=1,j,k;
    cin>> n;

    while(i<=n)
    {
        k=i-1;
        while(k>0)
        {

            cout<<"_";
            k--;
        }

        j=n-i+1;
        while(j>0)
        {
            cout<<i;
            j--;

        }

        cout<<"\n";
        i++;
    }


    /*
    //sum of all even numbers
    int sum=0,c,i=2;
    cin >> c;
    while(i<=c)
    {
        sum+=i;
        i=i+2;
    }
    cout <<"sum is " <<sum;
    */
}
