#include <iostream>
using namespace std;

class human
{

private:
    int age;

public:
    int height;
    int weight;

    int getAge()
    {
        return this -> age;
    }

    void setWeight(int w)
    {
        this->weight=w;
    }

};

class malePublic : public human//public
{
public:
    string color;

    void sleep()
    {
        cout<<"public male sleeping"<<endl;
    }
};

class maleProtected : protected human//protected
{
public:
    string color;

    int getHeight()
    {
        return this->height;
    }

    void sleep()
    {
        cout<<"protected male sleeping"<<endl;
    }



};



class malePrivate : private human //Private
{
public:
    string color;

    int getHeight()
    {
        return this->height;
    }

    void sleep()
    {
        cout<<"private male sleeping"<<endl;
    }
};


int main()
{
    malePublic m1;
    cout<<"Public~~~~~~"<<endl;
    cout<<m1.getAge()<<endl;
    cout<<m1.height<<endl;
    cout<<m1.weight<<endl;
    cout<<m1.color<<endl;
    m1.setWeight(50);
    cout<<m1.weight<<endl;
    m1.sleep();


    maleProtected m2;
    cout<<endl<<endl<<"protected~~~~~~"<<endl;
    cout<< m2.getHeight()<<endl;
    m2.sleep();

    malePrivate m3;
    cout<<endl<<endl<<endl<<"private~~~~~~"<<endl;
    cout<< m3.getHeight()<<endl;
    m3.sleep();


    return 0;
}
