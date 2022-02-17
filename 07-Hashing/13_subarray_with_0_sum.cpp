class Solution
{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        // use prefix sum and hashing together
        // firstly, calculate the prefix sum
        // if the prefix sum is already present in the hash table, return true
        // if the prefix sum is 0, then also return true
        // otherwise insert the prefix sum in the hash table
        
        unordered_set<int> hash;
        int prefix_sum = 0;
        for (int i = 0; i < n; i++)
        {
            prefix_sum += arr[i];
            if (hash.find(prefix_sum) != hash.end())
            {
                return true;
            }
            if (prefix_sum == 0)
            {
                return true;
            }
            hash.insert(prefix_sum);
        }
        return false;
    }
};
