class Solution 
{
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) 
    {
        int result = INT_MAX;
        unordered_map<int,int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (hash[arr[i]] > 1)
            {
                result = min(result, i);
            }
        }
        if (result != INT_MAX)
        {
            return result+1;
        }
        else
        {
            return -1;
        }
    }
};
