#include <iostream>
using namespace std;

class hero {

    public:
    int health;
    char level;

    hero() {
        cout<<"simple constructor called"<<endl;
    }

    //copy constructor
    hero(hero& temp) //pass by reference
    {

        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

};

int main()
{
    hero ram;
    ram.health=75;
    ram.level='h';
    cout<<"ram -> health: " <<ram.health <<" & level: "<<ram.level<<endl<<endl;

    //copy constructor called
    hero shyaam(ram);
    cout<<"shyaam -> health: "<<shyaam.health<<" & level: "<<shyaam.level<<endl<<endl;


    return 0;
}
