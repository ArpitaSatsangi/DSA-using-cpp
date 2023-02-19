#include <iostream>
using namespace std;

int power(int a,int b)
{
    if(b==0)
        return 0;

    if(b==1)
        return a;

    int ans=power( a, (b/2) );
    if(b&1)//odd
    {
        return a*ans*ans;
    }
    else
    {
        return ans*ans;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    int ans=power(a,b);
    cout<<a<<"^"<<b<<" is "<<ans<<endl;
}
