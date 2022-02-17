class Solution{
    public:
    bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i*i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
        int result = 0;
        for (int i = 2; i*i <= N; i++)
        {
            if (isPrime(i))
            {
                result++;
            }
        }
        return result;
    }
};
