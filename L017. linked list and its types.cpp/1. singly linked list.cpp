#include <iostream>
using namespace std;

class node 
{
public:
    int data;
    node * next;
    
    //constructor
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    
};

int main()
{
    node *start=NULL;
    
    return 0;
}
