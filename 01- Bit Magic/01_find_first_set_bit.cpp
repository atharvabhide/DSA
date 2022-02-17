class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        unsigned int position = 1;
        if (n == 0)
        {
            return 0;
        }
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                return position;
            }
            else
            {
                position++;
            }
            n = n / 2;
        }
        return position;
    }
};
