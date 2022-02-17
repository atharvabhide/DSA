vector<int> levelOrder(struct Node* root) 
{
    vector<int> v;
    if (root == NULL) v;
    queue<Node*> q;
    q.push(root);
    while (q.empty() != true)
    {
        Node* temp = q.front();
        if (temp->left != NULL) q.push(temp->left);
        if (temp->right != NULL) q.push(temp->right);
        q.pop();
        v.push_back(temp->data);
    }
    return v;
}
