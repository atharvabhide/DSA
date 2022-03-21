class Solution
{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    
    void dfs(Node* root, int &res)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left != NULL and root->right != NULL)
        {
            if (root->data != (root->left->data+root->right->data))
            {
                res = 0;
            }
        }
        if (root->left == NULL and root->right != NULL)
        {
            if (root->data != root->right->data)
            {
                res = 0;
            }
        }
        if (root->right == NULL and root->left != NULL)
        {
            if (root->data != root->left->data)
            {
                res = 0;
            }
        }
        dfs(root->left, res);
        dfs(root->right, res);
    }
    
    int isSumProperty(Node *root)
    {
        int res = 1;
        dfs(root, res);
        return res;
    }
};
