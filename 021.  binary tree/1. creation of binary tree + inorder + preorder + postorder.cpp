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

int main()
{
    node *root=NULL;
    root = buildtree(root);

    cout<<endl<<"INORDER: ";
    inorder(root);
    cout<<endl<<"PREORDER: ";
    preorder(root);
    cout<<endl<<"POSTORDER: ";
    postorder(root);

    return 0;
}
