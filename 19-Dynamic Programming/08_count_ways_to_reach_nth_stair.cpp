class Solution
{
    public:
    //Function to find the nth fibonacci number using top-down approach.
    long long findNthFibonacci(int number, long long int dp[])
    {
        if (dp[number] == 0)
        {
            long long res;
            if (number == 0 or number == 1)
            {
                res = number;
            }
            else
            {
                res = findNthFibonacci(number-1, dp) + findNthFibonacci(number-2, dp);
            }
            dp[number] = res;
        }
        return dp[number];
    }
};
