#include <iostream>
using namespace std;

long long int squareroot(int n)
{
    int s=0,e=n;
    long long int mid,ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        long long int square=mid*mid;

        if(square==n)
        {
            return mid;
        }
        else if(square<n)
        {
            s=mid+1;
            ans=mid;
        }
        else
        {
            e=mid-1;
        }
    }

    return ans;
}

double moreprecision(int n,int precision, int integer)
{
    double factor=1,ans=integer;
    for(int j=0;j<precision;j++)
    {
        factor=factor/10;
        for(double i=integer;i*i<n;i=i+factor)
        {
            ans=i;
        }
    }

    return ans;
}


int main()
{
    int n;
    cout<<"enter n:  ";
    cin>>n;

    cout<<"square root(integer value) of "<<n<<" is "<<squareroot(n)<<endl;
    cout<<"square root(precise value) of "<<n<<" is "<<moreprecision(n,4,squareroot(n));

    return 0;
}
