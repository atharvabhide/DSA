class Solution
{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        long long result = arr[0];
        long long maximumEnding = arr[0];
        for (int i = 1; i < n; i++)
        {
            long long x = (long long)(arr[i]);
            maximumEnding = max(maximumEnding+arr[i], x);
            result = max(result, maximumEnding);
        }
        return result;
    }
};
