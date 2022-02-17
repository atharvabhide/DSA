class Solution
{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            if (hash[arr[i]] == 1)
            {
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};
