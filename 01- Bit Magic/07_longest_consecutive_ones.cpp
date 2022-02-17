class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int result = 0;
        int count = 0;
        while (N > 0)
        {
            if (N % 2 == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            result = max(result, count);
            N  = N >> 1;
        }
        return result;
    }
};
