//Function to count number of nodes in BST that lie in the given range.

void traversal(Node* root, int l, int h, int &res)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left, l, h, res);
    if (l <= root->data and root->data <= h)
    {
        res++;
    }
    traversal(root->right, l, h, res);
}

int getCount(Node *root, int l, int h)
{
    int res = 0;
    traversal(root, l, h, res);
    return res;
}
