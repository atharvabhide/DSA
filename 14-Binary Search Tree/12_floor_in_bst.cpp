void search(Node* root, Node* x, int &res)
{
    // brute force - use a simple traversal
    // O(h) time solution
    if (root == NULL)
    {
        return;
    }
    if (root->data == x->data)
    {
        res = root->data;
        return;
    }
    else if (root->data < x->data)
    {
        res = root->data;
        search(root->right, x, res);
    }
    else
    {
        search(root->left, x, res);
    }
}

int floor(Node* root, int key) 
{
    Node* x = newNode(key);
    int res = -1;
    search(root, x, res);
    return res;
}
