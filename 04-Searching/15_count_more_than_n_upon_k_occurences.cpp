class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) 
    {
        int x = n/k;
        int result = 0;
        unordered_map<int,int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }
        for (auto it = hash.begin(); it != hash.end(); it++)
        {
            if (it->second > x)
            {
                result++;
            }
        }
        return result;
    }
};
