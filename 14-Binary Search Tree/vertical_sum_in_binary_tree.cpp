class Solution
{
  public:
    
    void dfs(Node* root, map<int, int> &mp, int hd)
    {
        if (root == NULL)
        {
            return;
        }
        dfs(root->left, mp, hd-1);
        mp[hd] += root->data;
        dfs(root->right, mp, hd+1);
    }
    
    vector <int> verticalSum(Node *root) 
    {
        map<int, int> mp;
        int hd = 0;
        dfs(root, mp, hd);
        
        vector<int> res;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};
