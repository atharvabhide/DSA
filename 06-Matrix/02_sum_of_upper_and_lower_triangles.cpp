class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& arr, int n)
    {
        int diagonal_sum = 0;
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    diagonal_sum += arr[i][j];
                }
                total_sum += arr[i][j];
            }
        }
        int lower_triangle = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                lower_triangle += arr[i][j];
            }
        }
        int upper_triangle = total_sum-lower_triangle+diagonal_sum;
        vector<int> result;
        result.push_back(upper_triangle);
        result.push_back(lower_triangle);
        return result;
    }
};
