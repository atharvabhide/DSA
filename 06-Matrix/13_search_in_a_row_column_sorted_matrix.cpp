class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int>> arr, int n, int m, int x) 
    {
        // the matrix is sorted column-wise as well as row-wise
        // so start from the top right element
        // if arr[i][j] == x then return true
        // if arr[i][j] < x then x is definitely not present in the current row, so update the row
        // if arr[i][j] > x then x is definitely not present the current column, so update the column
        int i = 0;
        int j = m-1;
        while (i < n and j >= 0)
        {
            if (arr[i][j] == x)
            {
                return true;
            }
            else if (x < arr[i][j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};
