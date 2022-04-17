class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
        if (root == NULL) return NULL;
        if (root->data == n1 or root->data == n2)
        {
            return root;
        }
        
        Node* lca1 = lca(root->left, n1, n2);
        Node* lca2 = lca(root->right, n1, n2);
        
        if (lca1 != NULL and lca2 != NULL)
        {
            return root;          
        }
        if (lca1 != NULL)
        {
            return lca1;
        }
        else
        {
            return lca2;
        }
    }
};
