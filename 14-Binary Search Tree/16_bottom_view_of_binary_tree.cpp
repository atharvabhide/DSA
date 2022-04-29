class Solution 
{
  public:
    vector<int> bottomView(Node *root) 
    {
        // do normal vertical order traversal and store the last node's value on the vertical line in the res vector.
        map<int, int> m;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while (q.empty() != true)
        {
            Node* curr = q.front().first;
            int hd = q.front().second;
            q.pop();
            m[hd] = curr->data;
            if (curr->left != NULL)
            {
                q.push({curr->left, hd-1});
            }
            if (curr->right != NULL)
            {
                q.push({curr->right, hd+1});
            }
        }
        vector<int> res;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};
