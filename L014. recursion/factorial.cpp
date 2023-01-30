#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"enter n:  ";
    cin>>n;

    cout<<endl<<"factorial of "<<n<<" is "<<fact(n)<<endl;
}
