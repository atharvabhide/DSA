class Solution 
{
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_set<int> us;
        for (int i = 0; i < m; i++)
        {
            us.insert(b[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (us.find(a[i]) != us.end())
            {
                count++;
            }
        }
        return count;
    }
};
