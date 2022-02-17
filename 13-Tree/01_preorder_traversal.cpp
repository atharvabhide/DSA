void traversal(Node* root, vector<int> &result)
{
    if (root == NULL)
    {
        return;
    }
    result.push_back(root->data);
    traversal(root->left, result);
    traversal(root->right, result);
}

vector <int> preorder(Node* root)
{
    vector<int> result;
    traversal(root, result);
    return result;
}
