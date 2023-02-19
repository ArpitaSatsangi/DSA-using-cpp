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

class bhootiyaKutte : public dog
{
public:
    void speakbhootiyaKutte(){
        cout<<"bhootiya Kutta speaking!!!"<<endl;
    }
};

int main()
{
    bhootiyaKutte d;
    d.speakAnimal();
    d.speakDog();
    d.speakbhootiyaKutte();

    return 0;
}
