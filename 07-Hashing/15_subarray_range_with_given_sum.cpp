class Solution
{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        int count = 0;
        unordered_map<int, int> hash;
        int prefix_sum = 0;
        hash[0]++;
        for (int i = 0; i < n; i++)
        {
            prefix_sum += arr[i];
            if (hash.find(prefix_sum-sum) != hash.end())
            {
                count += hash[prefix_sum-sum];
            }
            hash[prefix_sum]++;
        }
        return count;
    }
};
