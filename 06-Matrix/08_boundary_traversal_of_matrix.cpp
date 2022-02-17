class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int>> arr, int n, int m) 
    {
        // think about the corner cases i.e when either there is only one row or only one column
        vector<int> result;
        if (n == 1)
        {
            for (int i = 0; i < m; i++)
            {
                result.push_back(arr[0][i]);
            }
            return result;
        }
        if (m == 1)
        {
            for (int i = 0; i < n; i++)
            {
                result.push_back(arr[i][0]);
            }
            return result;
        }
        int i = 0;
        for (int j = 0; j < m; j++)
        {
            result.push_back(arr[i][j]);
        }
        i = m-1;
        for (int j = 1; j < n; j++)
        {
            result.push_back(arr[j][i]);
        }
        i = n-1;
        for (int j = m-2; j >= 0; j--)
        {
            result.push_back(arr[i][j]);
        }
        i = 0;
        for (int j = n-2; j >= 1; j--)
        {
            result.push_back(arr[j][i]);
        }
        return result;
    }
};
