class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>> &arr)
    {
        // check the hint 
        int rows = arr.size();
        int columns = arr[0].size();
        int r[rows] = {0};
        int c[columns] = {0};
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (arr[i][j] == 1)
                {
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (r[i] == 1 or c[j] == 1)
                {
                    arr[i][j] = 1;
                }
            }
        }
    }
};
