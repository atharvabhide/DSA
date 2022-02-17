class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        if (n == 1)
        {
            return true;
        }
        else
        {
            int count = 0;
            int result = 0;
            while (n > 0)
            {
                if (n % 2 == 1)
                {
                    count++;
                }
                else
                {
                    count = 0;
                }
                result = max(result, count);
                n = n >> 1;
            }
            if (result >= 2)
            {
                return false;
            }
            return true;
        }
    }
};
