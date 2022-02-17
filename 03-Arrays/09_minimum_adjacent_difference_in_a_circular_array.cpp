class Solution
{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n)
    {    
        int res = abs(arr[0]-arr[n-1]);
        for (int i = 0; i < n-1; i++)
        {
            res = min(res, abs(arr[i+1]-arr[i]));
        }
        return res;
    }
};
