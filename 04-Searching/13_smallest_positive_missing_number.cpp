class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        unordered_set<int> hash;
        for (int i = 0; i < n; i++)
        {
            hash.insert(arr[i]);
        }
        for (int i = 1; i <= n+1; i++)
        {
            if (hash.find(i) == hash.end())
            {
                return i;
            }
        }
    } 
};
