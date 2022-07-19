class Solution
{
    public:
    //Function to find all possible unique subsets.
    
    void helper(vector<int> arr, int i, vector<int> v, set<vector<int>> &res)
    {
        if (i == arr.size())
        {
            sort(v.begin(), v.end());
            res.insert(v);
            return;
        }
        // not take vali condition
        helper(arr, i+1, v, res);
        
        // take vali condition
        v.push_back(arr[i]);
        helper(arr, i+1, v, res);
    }
    
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        set<vector<int>> res;
        vector<int> v;
        helper(arr, 0, v, res);
        
        vector<vector<int>> x;
        for (auto it = res.begin(); it != res.end(); it++)
        {
            x.push_back(*it);
        }
        return x;
    }
};
