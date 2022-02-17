class Solution
{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) 
    {
        unordered_map<ll,ll> hash1;
        unordered_map<ll,ll> hash2;
        for (int i = 0; i < N; i++)
        {
            hash1[A[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            hash2[B[i]]++;
        }
        if (hash1 == hash2)
        {
            return true;
        }
        return false;
    }
};
