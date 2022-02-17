class Solution{
    public:
        // Complete this function
    long long factorial(int N) {
        long long result = 1;
        for (long long i = 2; i <= N; i++)
        {
            result *= i;
        }
        return result;
    }
};
