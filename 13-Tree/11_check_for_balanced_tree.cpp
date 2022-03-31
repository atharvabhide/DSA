class Solution
{
    public:
    //Function to check whether a binary tree is balanced or not.

    // helper function checks whether the tree is balanced or not as well as returns its height
    // if tree is empty return 0 height
    // then return left subtree height
    // if it is -1 then tree is unbalanced
    // do the same thing for right subtree
    // then check the balancing condition
    // if it is passing then return the height of the current subtree
    // if it is not passing then return -1
    
    int helper(Node* root)
    {
        if (root == NULL) return 0;
        int lh = helper(root->left);
        if (lh == -1) return -1;
        int rh = helper(root->right);
        if (rh == -1) return -1;
        if (abs(lh-rh) > 1) return -1;
        else return max(lh, rh)+1;
    }
    
    bool isBalanced(Node *root)
    {
        int res = helper(root);
        if (res != -1) return true;
        else return false;
    }
};
