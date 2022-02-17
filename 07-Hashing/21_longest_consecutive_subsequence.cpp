class Solution
{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        // insert all the elements in a hash table
        // start traversing the hash table elements
        // check if the element is the start of a subsequence or not
        // if it is the starting point of the subsequence then find the length 
        // return the max length of the consecutive subsequence
        int res = 1;
        unordered_set<int> hash;
        for (int i = 0; i < N; i++)
        {
            hash.insert(arr[i]);
        }
        for (auto x : hash)
        {
            if (hash.find(x-1) == hash.end())
            {
                int curr = 1;
                while (hash.find(x+curr) != hash.end())
                {
                    curr++;
                }
                res = max(res,curr);
            }
        }
        return res;
    }
};
