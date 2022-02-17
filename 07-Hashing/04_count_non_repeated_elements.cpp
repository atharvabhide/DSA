class Solution
{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        unordered_map<int,int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (hash[arr[i]] == 1)
            {
                result++;
            }
        }
        return result;
    }
};
