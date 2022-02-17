class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        // rightmost element is always the current leader initially
        // start traversing from the right and start with second last element
        // if the current element is greater than the current leader update the current leader
        vector<int> result;
        int current_leader = a[n-1];
        result.push_back(current_leader);
        for (int i = n-2; i >= 0; i--)
        {
            if (a[i] >= current_leader)
            {
                current_leader = a[i];
                result.push_back(current_leader);
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
