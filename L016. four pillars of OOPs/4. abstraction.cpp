//implementation hiding
#include <iostream>
using namespace std;

class abs
{
    private:
    int a,b;

    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"a = " <<a <<endl;
        cout<<"b = " <<b <<endl;
    }
};

int main()
{
    abs x;
    x.set(15,23);
    x.display();

    return 0;
}
