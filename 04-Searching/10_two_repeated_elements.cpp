class Solution 
{
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) 
    {
        unordered_map<int,int> hash;
        vector<int> result;
        for (int i = 0; i < n+2; i++)
        {
            hash[arr[i]]++;
            if (hash[arr[i]] > 1)
            {
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};
