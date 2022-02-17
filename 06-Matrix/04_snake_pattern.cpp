class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int>> matrix)
    {   
        // even-odd logic
        vector<int> result;
        int x = 1;
        for (int i = 0; i < matrix.size(); i++)
        {
            if (x % 2 != 0)
            {
                for (int j = 0; j < matrix.size(); j++)
                {
                    result.push_back(matrix[i][j]);
                }
            }
            else 
            {
                for (int j = matrix.size()-1; j >= 0; j--)
                {
                    result.push_back(matrix[i][j]);
                }
            }
            x++;
        }
        return result;
    }
};
