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



pair <int,int> fast_diameter(node *root) //diameter, height
{
    if(root==NULL)
    {
        pair<int, int> p = make_pair(0,0);
        return p;
    }

    pair <int,int> left = fast_diameter(root->left);
    pair <int,int> right = fast_diameter(root->right);
    
    int opt1 = left.first;
    int opt2 = right.first;
    int opt3 = left.second + right.second +1;
    
    pair<int,int> ans;
    ans.first =  max(opt1, max(opt2, opt3));
    ans.second = max(left.second, right.second) +1;
    
    return ans;
}

int main()
{
    node *root=NULL;
    root = buildtree(root);
    
    pair<int,int> ans = fast_diameter(root);
    
    cout<<endl<<"diameter is "<<ans.first<<endl;
    cout<<endl<<"height is "<<ans.second<<endl;


    return 0;
}

/*
enter the data: 10
enter left child of node 10: 
enter the data: 20
enter left child of node 20: 
enter the data: 30
enter left child of node 30: 
enter the data: -1
enter right child of node 30: 
enter the data: -1
enter right child of node 20: 
enter the data: -1
enter right child of node 10: 
enter the data: 40
enter left child of node 40: 
enter the data: -1
enter right child of node 40: 
enter the data: -1

diameter is 4

height is 3

*/
