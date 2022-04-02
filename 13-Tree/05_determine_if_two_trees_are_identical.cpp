class Solution
{
    public:
    //Function to check if two trees are identical.
    // use preorder traversal
    void dfs(Node* root, vector<int> &arr)
    {
        if (root == NULL)
        {
            arr.push_back(-1);
            return;
        }
        arr.push_back(root->data);
        dfs(root->left, arr);
        dfs(root->right, arr);
    }
    
    bool isIdentical(Node *r1, Node *r2)
    {
        vector<int> arr1;
        vector<int> arr2;
        dfs(r1, arr1);
        dfs(r2, arr2);
        return (arr1 == arr2);
    }
};
