class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if (m == n)
        {
            return -1;
        }
        int result = 1;
        int x = m ^ n;
        while (x > 0)
        {
            if (x % 2 == 1)
            {
                return result;
            }
            result++;
            x = x >> 1;
        }
        return result;
    }
};
