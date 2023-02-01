#include <iostream>
using namespace std;

int count_stairs(int n)
{
    if(n<0)//basement
        return 0;
    if(n==0)//at stair 0-ground level
        return 1;

    return count_stairs(n-1)+count_stairs(n-2);
}

int main()
{
    int n;
    cout<<"enter the number of stairs:  ";
    cin>>n;

    cout<<endl<<"there are "<<count_stairs(n)<<" number of ways to climb (1 or/and 2 steps) "<<n<<" stairs."<<endl<<endl ;
}
