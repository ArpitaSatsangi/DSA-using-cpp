#include <iostream>
using namespace std;

class B
{
    public:

    int a;
    int b;

    int sum()
    {
        return (a+b);
    }

    void operator+ (B &obj)
    {
        cout<<"good to see you!!"<<endl;
        int value1 = this ->a;
        int value2 = obj.a;
        cout<<"Substraction Output: " <<value2-value1 <<endl;
    }

    void operator() ()
    {
        cout<<endl<<"yoo, bracket operator "<<this-> a<<endl;
    }



};


int main()
{
    B obj1,obj2;
    obj1.a=1;
    obj2.a=4;

    obj1+obj2;
    obj1();

    return 0;
}

