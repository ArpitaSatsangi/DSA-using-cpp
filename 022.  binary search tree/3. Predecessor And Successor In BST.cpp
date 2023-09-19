/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };


*************************************************************/




pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode *temp = root;
    int pre = -1;
    int succ = -1;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            if (temp->left != NULL)
            {
                TreeNode *l = temp->left;
                while (l->right != NULL)
                {
                    l = l->right;
                }
                pre = l->data;
            }

            if (temp->right != NULL)
            {
                TreeNode *r = temp->right;
                while (r->left != NULL)
                {
                    r = r->left;
                }
                succ = r->data;
            }
            break;
        }
        else if (temp->data > key)
        {
            succ = temp->data;
            temp = temp->left;
        }
        else
        {
            pre = temp->data;
            temp = temp->right;
        }
    }

    return {pre, succ};
}

