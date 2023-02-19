#include <iostream>
using namespace std;

class animal
{
public:
    int age;
    int weight;

    void speakAnimal(){
        cout<<"animal speaking!!!"<<endl;
    }

};

class dog : public animal
{
public:
    void speakDog(){
        cout<<"dog speaking!!!"<<endl;
    }
};


int main()
{
    dog d;
    d.speakAnimal();
    d.speakDog();

    return 0;
}
