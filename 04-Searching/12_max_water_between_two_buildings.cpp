class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) 
    { 
        // two pointers
        int result = 0;
        int start = 0;
        int end = n-1;
        while (start < end)
        {
            if (height[start] < height[end])
            {
                result = max(result,height[start]*(end-start-1));
                start++;
            }
            else 
            {
                result = max(result,height[end]*(end-start-1));
                end--;
            }
        }
        return result;
    } 
};
