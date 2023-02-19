#include <iostream>
using namespace std;

class hero {

    public:
    int health;

};

int main()
{
    hero h1;//static
    h1.health=80;
    cout<<"level of h1 is " << h1.health <<endl<<endl;

    hero *h2=new hero;//dynamic
    (*h2).health=90;
    cout<<"level of h2 is " << h2->health <<endl;

    return 0;
}
