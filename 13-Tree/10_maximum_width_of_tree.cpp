class Solution 
{
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) 
    {
        // use method 2 of level order traversal line by line
        vector<int> v;
        int res = 0;
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
            int x = v.size();
            res = max(res, x);
            v.clear();
        }
        return res;
    }
};
