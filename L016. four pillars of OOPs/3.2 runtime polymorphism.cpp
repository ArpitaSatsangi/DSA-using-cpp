#include <iostream>
using namespace std;

class animal
{
    public:
    void speak()
    {
        cout<<"animal speaking"<<endl;
    }
};

class dog : public animal
{
    public:
    void speak()//function overriding
    {
        cout<<"dog barking"<<endl;
    }
};

int main()
{
    dog d;
    d.speak(); //dog barking

    return 0;
}
