class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if (n == 1)
        {
            return true;
        }
        else if (n == 0)
        {
            return false;
        }
        else
        {
            // Brian Kirningham Algorithm
            n = n & (n-1);
            if (n == 0)
            {
                return true;
            }
            return false;
        }
    }
};
