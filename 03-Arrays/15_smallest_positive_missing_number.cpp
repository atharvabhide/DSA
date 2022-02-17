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
        int res = 1;
        while (hash.find(res) != hash.end())
        {
            res++;
        }
        return res;
    } 
};
