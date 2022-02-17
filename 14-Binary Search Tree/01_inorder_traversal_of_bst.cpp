void traversal(Node* &root, vector<int> &result)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left, result);
    result.push_back(root->data);
    traversal(root->right, result);
}

vector<int> inOrder(Node *root) 
{
    //left->root->right
    vector<int> result;
    traversal(root, result);
    return result;
}
