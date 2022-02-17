class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int result = 0;
        while (a > 0 or b > 0)
        {
            int first = a % 2;
            int second = b % 2;
            if (first != second)
            {
                result++;
            }
            a = a / 2;
            b = b / 2;
        }
        return result;
    }
};
