class Solution
{   
public:
    int maximumSumSubarray(int k, vector<int> &arr , int n)
    {
        // sliding window
        // maximum sum of subarray of size k
        int curr = 0;
        int res = 0;
        for (int i = 0; i < k; i++) // calculating first window sum
        {
            res += arr[i];
        }
        curr = res;
        for (int i = 1; i <= n-k; i++)
        {
            curr -= arr[i-1];
            curr += arr[i+k-1];
            res = max(res, curr);
        }
        return res;
    }
};
