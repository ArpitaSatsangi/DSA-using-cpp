#include <iostream>
using namespace std;

int ap(int n)
{
    return (3*n+7);
}

int fib(int n)
{
    int a=0,b=1,i,c;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
    {
        for(i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}

int bits(int a,int b)
{
    int flag=0;
    while(a!=0)
    {
        if(a%2==1)
            flag++;
        a=a/2;
    }
    while(b!=0)
    {
        if(b%2==1)
            flag++;
        b=b/2;
    }
    return flag;
}


int main()
{
    int n,m;
    cin>>n;
    cout<<"nth ap term is "<<ap(n)<<endl;
    cout<<"nth fib term is "<<fib(n)<<endl;

    cin>>m;
    cout<<"ans is "<<bits(n,m)<<endl;
}
