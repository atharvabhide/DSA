class Solution
{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node)
    {
        if (node == NULL)
        {
            return 0;
        }
        int left_subtree = 1+height(node->left);
        int right_subtree = 1+height(node->right);
        return max(left_subtree, right_subtree);
    }
};
