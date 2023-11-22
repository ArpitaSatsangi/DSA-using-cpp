#include <iostream>
using namespace std;

class heap
{
    public:
    int arr[100];
    int size;
    
    heap()//constructor
    {
        //arr[0]=-1;
        size=0;
    }
    
    void insert(int value)
    {
        size=size+1;
        int index = size;
        
        arr[size]=value;
        
        while(size>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    
    void deleted()
    {
        if(size==0)
        {
            cout<<"nothing to delete"<<endl;
            return;
        }
        
        //swap first and last element
        arr[1]=arr[size];
        size--;
        
        int i=1;
        while(i<size)
        {
            int left = 2*i;
            int right = 2*i+1;
            
            if(left<size && arr[i]<arr[left])
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(right<size && arr[i]<arr[right])
            {
                swap(arr[i],arr[right]);
                i=right;
            }
            else
            {
                return;
            }
        }
    }
    
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
    
};

int main()
{
    heap h;
    
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    
    h.print(); //55  54  53  50  52  
    
    h.deleted();
    h.print(); //54  52  53  50  
    
    return 0;
}
