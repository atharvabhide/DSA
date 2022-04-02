class Solution
{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node* root)
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
                v.push_back(temp->data);
                q.pop();
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
        for (int i = 0; i < arr.size(); i++)
        {
            if (i % 2 == 1)
            {
                reverse(arr[i].begin(), arr[i].end());
            }
        }
        vector<int> res;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                res.push_back(arr[i][j]);
            }
        }
        return res;
    }
};
