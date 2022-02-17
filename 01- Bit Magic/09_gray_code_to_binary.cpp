class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        int result = n;
        while (n > 0)
        {
            n = n >> 1;
            result = result ^ n;
        }
        return result;
    }
};
