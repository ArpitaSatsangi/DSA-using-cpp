#include <iostream>
#include <string>
using namespace std;

void digits(int n)
{
    string arr[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    if(n==0)
        return ;

    int digit=n%10;
    n=n/10;

    digits(n);

    cout<<arr[digit]<<" ";
}

int main()
{
    int n;
    cout<<"enter the number:  ";
    cin>>n;

    cout<<endl<<endl;
    digits(n);

    return 0;
}
