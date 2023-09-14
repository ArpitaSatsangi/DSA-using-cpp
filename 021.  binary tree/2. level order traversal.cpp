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

void levelOrderTraversal(node *root)
{
    queue<node*> q;
    
    q.push(root);
    
    while(!q.empty())
    {
        node *temp = q.front();
        cout<< temp->data <<"  ";
        q.pop();
        
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


int main()
{
    node *root=NULL;
    root = buildtree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"\n\nLevel order traversal in single line is :\n";
  
    levelOrderTraversal(root);
    /*~~output~~
    Level order traversal in single line is :
    1  3  5  7  11  17  
    */

    return 0;
}
