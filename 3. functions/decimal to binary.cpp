#include <iostream>
#include <math.h>
using namespace std;
//decimal to binary
int main()
{
    int n,i=0;
    float ans=0;

    cout<<"enter n: ";
    cin>>n;
    while(n!=0)
    {
        int bit=n&1;
        ans+=(bit*pow(10,i));
        n=n>>1;
        i++;

    }
    cout<<"answer is: " <<ans<<endl;



}
