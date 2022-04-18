void search(Node* root, Node* x, int &res)
{
    // O(h) time solution
    // brute force - use simple traversal
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
        search(root->right, x, res);
    }
    else
    {
        res = root->data;
        search(root->left, x, res);
    }
}

int findCeil(Node* root, int input) 
{
    if (root == NULL) return -1;
    int res = -1;
    Node* x = newNode(input);
    search(root, x, res);
    return res;
}
