class Solution{
    public:
    int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        long long m = 1000000007;
        return int(((a%m) * (b%m)) % m);
    }
};
