#include <iostream>
using namespace std;

class animal
{
public:
    int age;
    int weight;

    void speakANIMAL(){
        cout<<"animal speaking!!!"<<endl;
    }

};

class human {

public:

    string color;
    void speakHUMAN(){
        cout<<"human speaking!!!"<<endl;
    }
};

class male : public animal, public human
{
public:
    void speakMALE(){
        cout<<"male speaking!!!"<<endl;
    }
};

int main()
{
    male d;
    d.speakMALE();
    d.speakHUMAN();
    d.speakANIMAL();

    return 0;
}

