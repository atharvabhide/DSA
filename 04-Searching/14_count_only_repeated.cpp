class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n)
    {
        pair<int,int> result = make_pair(-1,-1);
        unordered_map<int,int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
            if (hash[arr[i]] > 1)
            {
                result.first = arr[i];
                result.second = hash[arr[i]];
            }
        }
        return result;
    }
};
