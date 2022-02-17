class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
    {
        // use 4 pointers top, bottom, left, right
        // refer the video as well
        vector<int> result;
        int top = 0;
        int bottom = r-1;
        int left = 0;
        int right = c-1;
        while (top <= bottom and left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                result.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};
