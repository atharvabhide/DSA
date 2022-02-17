class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    void traversal(Node* root, vector<int> &arr)
    {
        if (root == NULL)
        {
            return;
        }
        traversal(root->left, arr);
        arr.push_back(root->data);
        traversal(root->right, arr);
    }
    bool isBST(Node* root) 
    {
        vector<int> arr;
        traversal(root, arr);
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] <= arr[i-1])
            {
                return false;
            }
        }
        return true;
    }
};
