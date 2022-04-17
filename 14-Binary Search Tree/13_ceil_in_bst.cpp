// Function to return the ceil of given number in BST.
void traversal(Node* root, int key, int &res)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left, key, res);
    if (root->data == key or root->data > key)
    {
        res = min(res, root->data);
    }
    traversal(root->right, key, res);
}

int findCeil(Node* root, int key) 
{
    int res = INT_MAX;
    traversal(root, key, res);
    if (res == INT_MAX) return -1;
    return res;
}
