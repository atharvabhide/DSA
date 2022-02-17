class Solution 
{
  public:
    // Function to return a list containing the inorder traversal of the tree.
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
    vector<int> inOrder(Node* root) 
    {
        vector<int> arr;
        traversal(root, arr);
        return arr;
    }
};
