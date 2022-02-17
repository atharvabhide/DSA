class Solution
{   
    public:
    //Function to interchange the rows of a matrix.
    void interchangeRows(vector<vector<int>> &arr)
    {
        int x = arr.size()/2;
        for (int i = 0; i < x; i++)
        {
            int y = arr.size()-i-1;
            for (int j = 0; j < arr[0].size(); j++)
            {
                swap(arr[i][j], arr[y][j]);
            }
        }
    }
};
