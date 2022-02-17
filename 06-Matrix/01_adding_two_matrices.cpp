class Solution
{   
    public:
    //Function to add two matrices.
    vector<vector<int>> sumMatrix( const vector<vector<int> >& a, const vector<vector<int> >& b)
    {
        vector<vector<int>> result;
        if (a.size() != b.size() or a[0].size() != b[0].size())
        {
            return result;
        }
        for (int i = 0; i < a.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < a[0].size(); j++)
            {
                temp.push_back(a[i][j]+b[i][j]);
            }
            result.push_back(temp);
        }
        return result;
    }
};
