#include <iostream>
#include <stdlib.h>
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

node *buildtree(node *root)
{
    cout<<"enter the data: ";
    int d;
    cin>>d;

    root=new node(d);

    if(d==-1)
    {
        return NULL;
    }

    cout<<"enter left child of node "<< d <<": " <<endl;
    root->left=buildtree(root->left);

    cout<<"enter right child of node "<< d <<": " <<endl;
    root->right=buildtree(root->right);

    return root;

}

void inorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }

    inorder(root->left);
    cout<< root->data <<"  ";
    inorder(root->right);
}

void preorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }

    cout<< root->data <<"  ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data <<"  ";
}



int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    int left = height(root->left);
    int right = height(root->right);
    
    int ans = max(left, right) + 1;
    return ans;
}

int main()
{
    node *root=NULL;
    root = buildtree(root);

    cout<<endl<<"INORDER: ";
    inorder(root);
    
    cout<<endl<<"height is "<<height(root)<<endl;

    return 0;
}

/*
enter the data: 1
enter left child of node 1: 
enter the data: 2
enter left child of node 2: 
enter the data: 4
enter left child of node 4: 
enter the data: -1
enter right child of node 4: 
enter the data: -1
enter right child of node 2: 
enter the data: 5
enter left child of node 5: 
enter the data: -1
enter right child of node 5: 
enter the data: -1
enter right child of node 1: 
enter the data: 7
enter left child of node 7: 
enter the data: -1
enter right child of node 7: 
enter the data: -1
INORDER: 4  2  5  1  7  
height is 3
*/
