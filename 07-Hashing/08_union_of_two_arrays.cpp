class Solution
{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  
    {
        unordered_set<int> hash;
        for (int i = 0; i < n; i++)
        {
            hash.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            hash.insert(b[i]);
        }
        return hash.size();
    }
};
