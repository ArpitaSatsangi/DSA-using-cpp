#include <iostream>
#include "Hero.cpp"
using namespace std;

class Heroine {//class definition

    public:

    char level;
    int health;

};


class Villain {
    //empty class;
};


int main()
{
    //creation of object
    Heroine Layla;

    Layla.health=70;
    Layla.level='A';

    cout<<"size of Heroine Layla: "<<sizeof(Layla)<<endl;//8 because of padding and greedy allignment
    cout<<"health is "<<Layla.health<<endl;
    cout<<"level is "<<Layla.level<<endl;

    Villain Sam;
    cout<<endl<<endl<<"size of Villain Sam: "<<sizeof(Sam)<<endl;//1

    Hero Adam;
    cout<<endl<<"size of Hero Adam: "<<sizeof(Adam)<<endl;//28

    return 0;
}
