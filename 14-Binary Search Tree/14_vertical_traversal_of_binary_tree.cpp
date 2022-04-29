class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        // map stores the horizontal distance and all the node values associated with that horizontal distance.
        map<int, vector<int>> m;
        // queue stores a pair which has the node and its horizontal distance
        queue<pair<Node*, int>> q;
        // perform normal level order traversal and place the nodes at their appropriate positions in the map.
        q.push({root, 0});
        
        while (q.empty() != true)
        {
            Node* curr = q.front().first;
            int hd = q.front().second;
            q.pop();
            m[hd].push_back(curr->data);
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
            for (int i = 0; i < it->second.size(); i++)
            {
                res.push_back(it->second[i]);
            }
        }
        return res;
    }
};
