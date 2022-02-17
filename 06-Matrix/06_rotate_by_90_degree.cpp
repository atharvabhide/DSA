class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& arr, int n) 
    { 
        // get the transpose
        // then interchange the rows
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
        int x = n/2;
        for (int i = 0; i < x; i++)
        {
            int y = n-i-1;
            for (int j = 0; j < n; j++)
            {
                swap(arr[i][j], arr[y][j]);
            }
        }
    } 
};
