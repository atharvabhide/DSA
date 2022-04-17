void traversal(Node* root, int key, int &res)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left, key, res);
    if (root->data == key or root->data < key)
    {
        res = max(res, root->data);
    }
    traversal(root->right, key, res);
}

int floor(Node* root, int key) 
{
    int res = -1;
    traversal(root, key, res);
    return res;
}
