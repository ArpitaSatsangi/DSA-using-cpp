#include <iostream>
using namespace std;

class hero {

public:
    int health;

    hero ()
    {
        cout<<"COPY CONSTRUCTOR CALLED"<<endl;
    }

    ~hero()
    {
        cout<<"DESTRUCTOR CALLED"<<endl;
    }

};

int main()
{
    cout<<"for dynamic allocation:"<<endl;
    hero *h1=new hero();//dynamic allocation
    delete h1;//destructor called manually
    cout<<endl<<endl;

    cout<<"for static allocation:"<<endl;
    hero h2;//dynamic allocation
    //destructor called

    return 0;
}
