class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int> result;
        queue<Node*> q;
        q.push(node);
        while (q.empty() != true)
        {
            if (q.front()->left != NULL)
            {
                q.push(q.front()->left);
            }
            if (q.front()->right != NULL)
            {
                q.push(q.front()->right);
            }
            result.push_back(q.front()->data);
            q.pop();
        }
        return result;
    }
};
