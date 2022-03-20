//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* root)
{
    vector<vector<int>> res;
    vector<int> v;
    if (root == NULL) res;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (q.size() != 1)
    {
        Node* temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            q.push(NULL);
            res.push_back(v);
            v.clear();
        }
        else
        {
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
    }
    res.push_back(v);
    return res;
}
