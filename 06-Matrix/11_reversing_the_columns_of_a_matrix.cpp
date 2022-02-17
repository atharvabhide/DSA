class Solution
{   
    public:
    //Function to reverse the columns of a matrix.
    void reverseCol(vector<vector<int>> &matrix)
    {
        int x = matrix[0].size()/2;
        for (int j = 0; j < x; j++)
        {
            int columns = matrix[0].size()-j-1;
            for (int i = 0; i < matrix.size(); i++)
            {
                swap(matrix[i][j], matrix[i][columns]);
            }
        }
    }
};
