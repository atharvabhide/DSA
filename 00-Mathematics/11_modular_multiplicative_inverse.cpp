class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        for (int i = 0; i < m; i++)
        {
            if ((a*i) % m == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
