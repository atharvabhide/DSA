class Solution
{
    public:
    //Function to exchange first column of a matrix with its last column.
    void exchangeColumns(vector<vector<int>> &matrix)
    {
        int i = 0;
        int j = 0;
        int k = matrix[0].size()-1;
        while (i < matrix.size())
        {
            swap(matrix[i][j], matrix[i][k]);
            i++;
        }
    }
};
