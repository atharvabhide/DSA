class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    void traversal(Node* root, unordered_set<int> &hash)
    {
        if (root == NULL)
        {
            return;
        }
        traversal(root->left, hash);
        hash.insert(root->data);
        traversal(root->right, hash);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
        unordered_set<int> hash1;
        unordered_set<int> hash2;
        vector<int> res;
        traversal(root1, hash1);
        traversal(root2, hash2);
        for (auto it = hash1.begin(); it != hash1.end(); it++)
        {
            if (hash2.find(*(it)) != hash2.end())
            {
                res.push_back(*(it));
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};
