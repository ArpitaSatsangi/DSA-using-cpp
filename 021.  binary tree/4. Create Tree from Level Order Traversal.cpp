#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

void levelOrderTraversal(node *root)
{
    queue<node*> q;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        
        else
        {
            cout<< temp->data <<"  ";
            
            if(temp->left)
            {
                q.push(temp->left);
            }
        
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        
    }
}

void buildFromLevelOrder(node * &root)
{
    queue <node*> q;
    cout<<"Enter data for root :  ";
    int d;
    cin>>d;
    root = new node(d);
    q.push(root);
    
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        
        cout<<"Enter left child for " <<temp->data <<" :  ";
        int leftd;
        cin>>leftd;
        if(leftd != -1)
        {
            temp -> left = new node(leftd);
            q.push(temp->left);
        }
        
        cout<<"Enter right child for " <<temp->data <<" :  ";
        int rightd;
        cin>>rightd;
        if(rightd != -1)
        {
            temp -> right = new node(rightd);
            q.push(temp->right);
        }
    }
    
}


int main()
{
    node *root=NULL;
    
    buildFromLevelOrder(root);
    
    cout<<"\n\nLevel Order Traversal\n";
    
    levelOrderTraversal(root);
    

    return 0;
}


/*
Enter data for root :  1
Enter left child for 1 :  3
Enter right child for 1 :  5
Enter left child for 3 :  7
Enter right child for 3 :  11
Enter left child for 5 :  17
Enter right child for 5 :  -1
Enter left child for 7 :  -1
Enter right child for 7 :  -1
Enter left child for 11 :  -1
Enter right child for 11 :  -1
Enter left child for 17 :  -1
Enter right child for 17 :  -1
Level Order Traversal
1  
3  5  
7  11  17  
*/
