#include <iostream>
using namespace std;

void update(int **p)
{
    //p=p+1;
    //no change

    //*p=*p+1;
    //change in pointer value

    **p=**p+1;
    //change in value

}


int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<endl<<"before:"<<endl;
    cout<<"value = "<<i<<endl;
    cout<<"pointer = "<<p<<endl;
    cout<<"double pointer = "<<p2<<endl<<endl;

    update(p2);

    cout<<endl<<"after:"<<endl;
    cout<<"value = "<<i<<endl;
    cout<<"pointer = "<<p<<endl;
    cout<<"double pointer = "<<p2<<endl;

    return 0;
}
