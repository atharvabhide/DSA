void traversal(Node* root, vector<int> &arr)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left, arr);
    traversal(root->right, arr);
    arr.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
    vector<int> arr;
    traversal(root, arr);
    return arr;
}
