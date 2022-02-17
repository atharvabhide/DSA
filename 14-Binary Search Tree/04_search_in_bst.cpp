void traversal(Node* root, int x, bool &flag)
{
    if (root == NULL)
    {
        return;
    }
    else if (root->data == x)
    {
        flag = true;
    }
    else if (root->data > x)
    {
        traversal(root->left, x, flag);
    }
    else if (root->data < x)
    {
        traversal(root->right, x, flag);
    }
}

bool search(Node* root, int x) 
{
    bool flag = false;
    traversal(root,x,flag);
    return flag;
}
