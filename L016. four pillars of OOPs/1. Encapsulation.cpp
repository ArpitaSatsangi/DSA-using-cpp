/*
wrapping up data memebers(properties) and functions in a class.

a)Fully encapsulated class- all data members are private.they can be used and accessed in same class.

advantages: 
information hiding/data hiding (security high)
we can make class read only
code reusablity 
helps in unit testing

*/

#include <iostream>
using namespace std;

class human
{

private:
    int age;
    int height;
    int weight;

public:

    int getAge()
    {
        return this -> age;
    }

    void setWeight(int w)
    {
        this->weight=w;
    }

};


int main()
{
    human you;
    cout<<"everuthing is fine!!"<<endl;

    return 0;
}
