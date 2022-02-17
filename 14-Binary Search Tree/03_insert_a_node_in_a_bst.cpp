Node* insert(Node* root, int key) 
{
    if (root == NULL)
    {
        root = new Node(key);
        return root;
    }
    else if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        root->left = insert(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = insert(root->right, key);
    }
}
