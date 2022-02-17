int minValue(Node* root) 
{
    if (root->left == NULL)
    {
        return root->data;
    }
    return min(root->data, minValue(root->left));
}
