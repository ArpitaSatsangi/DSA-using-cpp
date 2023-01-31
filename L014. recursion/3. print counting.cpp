#include <iostream>
using namespace std;

void print_count_reverse(int n)//tail recurion
{
    if(n==0)
        return;

    cout<<n<<"  ";

    print_count_reverse(n-1);//tail

}

void print_count_forward(int n)//head recursion
{
    if(n==0)
        return;

    print_count_forward(n-1);//head

    cout<<n<<"  ";
}

int main()
{
    int n;
    cout<<"enter n:  ";
    cin>>n;

    cout<<endl<<"forward counting...."<<endl;
    print_count_forward(n);

    cout<<endl<<endl<<"reverse counting...."<<endl;
    print_count_reverse(n);

    return 0;
}
