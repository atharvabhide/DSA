void traversal(Node* root, int x, bool &res, unordered_set<int> &hash)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left, x, res, hash);
    if (hash.find(x-root->data) != hash.end())
    {
        res = true;
    }
    hash.insert(root->data);
    traversal(root->right, x, res, hash);
}

bool findPair(Node* root, int X) 
{
    unordered_set<int> hash;
    bool res = false;
    traversal(root, X, res, hash);
    return res;
}
