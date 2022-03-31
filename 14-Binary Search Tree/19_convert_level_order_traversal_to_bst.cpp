// normal bst insertion problem

Node* insert(Node* root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }
    if (root->data > x)
    {
        root->left = insert(root->left, x);
        return root;
    }
    if (root->data < x)
    {
        root->right = insert(root->right, x);
        return root;
    }
}

Node* constructBst(int arr[], int n)
{
    Node* root = new Node(arr[0]);
    for (int i = 1; i < n; i++)
    {
        insert(root, arr[i]);
    }
    return root;
}
