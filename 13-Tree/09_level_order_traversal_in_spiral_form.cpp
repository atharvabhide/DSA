vector<int> findSpiral(Node *root)
{
    vector<vector<int>> arr;
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
        arr.push_back(v);
        v.clear();
    }
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        if ((i+1) % 2 == 1)
        {
            reverse(arr[i].begin(), arr[i].end());
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            res.push_back(arr[i][j]);
        }
    }
    return res;
}
