class Solution
{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        //similar to chocolate distribution problem
        //here m = 2
        sort(arr, arr+n);
        int m = 2;
        int result = arr[m-1] - arr[0];
        for (int i = 1; i+m-1 < n; i++)
        {
            int temp = arr[i+m-1] - arr[i];
            result = min(temp, result);
        }
        return result;
    }
};
