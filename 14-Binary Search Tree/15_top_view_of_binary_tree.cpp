class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        // do normal vertical traversal and store the first node's value of every vertical line in the result vector.
        map<int, vector<int>> m;
        queue<pair<Node*, int>> q;
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
            res.push_back(it->second[0]);
        }
        return res;
    }
};
