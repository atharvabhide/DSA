class Solution 
{
  public:
    // Function to return the diameter of a Binary Tree.
  
    // for every node-
    // calculate height of left subtree
    // calculate height of right subtree
    // keep on taking the max(1+left_height+right_height)
    // return the result
    
    int height(Node* root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int lh = 1 + height(root->left);
        int rh = 1 + height(root->right);
        return max(lh, rh);
    }
    
    void dfs(Node* root, int &d)
    {
        if (root == NULL)
        {
            return;
        }
        dfs(root->left, d);
        dfs(root->right, d);
        d = max(d, 1+height(root->left)+height(root->right));
    }
    
    int diameter(Node* root) 
    {
        int d = 0;
        dfs(root, d);
        return d;
    }
};
