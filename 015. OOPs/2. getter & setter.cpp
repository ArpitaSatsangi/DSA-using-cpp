#include <iostream>
using namespace std;

class Hero {//class definition

    private:
    int health;
    char level;

    public:
    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }

    void setlevel(int ch)
    {
        level=ch;
    }

};


int main()
{
    //creation of object
    Hero Ram;

    Ram.sethealth(70);
    cout<<"Ram health is "<<Ram.gethealth()<<endl;

    Ram.setlevel('A');
    cout<<"Ram level is "<<Ram.getlevel()<<endl;

    return 0;
}
