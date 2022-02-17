class Solution 
{
  public:
  
    void traversal(Node* root, int low, int high, vector<int> &arr)
    {
        if (root == NULL)
        {
            return;
        }
        traversal(root->left, low, high, arr);
        if (root->data >= low and root->data <= high)
        {
            arr.push_back(root->data);
        }
        traversal(root->right, low, high, arr);
    }
    
    vector<int> printNearNodes(Node *root, int low, int high) 
    {
        vector<int> arr;
        traversal(root, low, high, arr);
        return arr;
    }
};
