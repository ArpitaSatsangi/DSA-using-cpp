#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

    private:
    string name;
    int age;

    public:
    void setValue(string name, int age)
    {
        this->name=name;
        this->age=age;
    }

    void getValue()
    {
        cout<<"The name of the person is "<<this->name<<" and the age is "<<this->age<<".";
    }
};

int main() {

    //Write your code here
    string n;
    cin>>n;

    int a;
    cin>>a;

    Person p;

    p.setValue(n,a);
    p.getValue();



    return 0;
}
