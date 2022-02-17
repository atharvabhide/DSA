class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        int x = n >> k;
        if (x % 2 == 1)
        {
            return true;
        }
        return false;
    }
};
