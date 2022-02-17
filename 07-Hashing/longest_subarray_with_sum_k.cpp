class Solution
{
    public:
    int lenOfLongSubarr(int arr[],  int n, int sum) 
    { 
        // watch video
        int result = 0;
        unordered_map<int, int> hash;
        int prefix_sum = 0;
        for (int i = 0; i < n; i++)
        {
            prefix_sum += arr[i];
            if (prefix_sum == sum)
            {
                result = i+1;
            }
            if (hash.find(prefix_sum) == hash.end())
            {
                hash[prefix_sum] = i;
            }
            if (hash.find(prefix_sum-sum) != hash.end())
            {
                result = max(result, i-hash[prefix_sum-sum]);
            }
        }
        return result;
    } 
};
