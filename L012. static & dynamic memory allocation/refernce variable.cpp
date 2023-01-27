#include <iostream>
using namespace std;

void update2(int &n)//pass by reference
{
    (n)++;
}

void update1(int n)//pass by value
{
    n++;
}


int main()
{

    int i=5;
    int &j=i;//reference variable

    cout<<"i= "<<i<<"  &  j= "<<j<<endl;

    i++;
    cout<<"i= "<<i<<"  &  j= "<<j<<endl;

    j++;
    cout<<"i= "<<i<<"  &  j= "<<j<<endl<<endl<<endl<<endl<<endl;



    int n=9;

    cout<<"n before update1:  "<<n<<endl; //9
    update1(n);
    cout<<"n after update1:  "<<n<<endl<<endl; //9

    cout<<"n before update2:  "<<n<<endl; //9
    update2(n);
    cout<<"n after update2:  "<<n<<endl; //10

    return 0;

}
