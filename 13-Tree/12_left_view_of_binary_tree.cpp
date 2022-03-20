vector<int> leftView(Node *root)
{
    // simply return left-most node of every level
    vector<vector<int>> res;
    vector<int> v;
    if (root == NULL) return v;
    queue<Node*> q;
    q.push(root);
    while (q.empty() != true)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node* temp = q.front();
            q.pop();
            v.push_back(temp->data);
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        res.push_back(v);
        v.clear();
    }
    
    vector<int> result;
    for (int i = 0; i < res.size(); i++)
    {
        result.push_back(res[i][0]);
    }
    return result;
}
