class Solution
{
    public:
    
    void helper(vector<vector<int>> &v, vector<int> A, vector<int> res, int index)
    {
        // refer code in 10 explanation
        if (index == A.size())
        {
            vector<int> temp;
            for (int i = 0; i < res.size(); i++)
            {
                temp.push_back(res[i]);
            }
            v.push_back(temp);
            return;
        }
        
        // not take vali condition
        helper(v, A, res, index+1);
        
        // take vali condition
        res.push_back(A[index]);
        helper(v, A, res, index+1);
        
        return;
    }
    
    vector<vector<int>> subsets(vector<int>& A)
    {
        vector<vector<int>> v;
        vector<int> res;
        int index = 0;
        helper(v, A, res, index);
        sort(v.begin(), v.end());
        return v;
    }
};
