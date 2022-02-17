class Solution
{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int n)
    {
        int start = n-1;
        int end = 0;
        while (end <= start)
        {
            int mid = end + (start-end)/2;
            if (arr[mid] > 0)
            {
                end = mid+1;
            }
            else
            {
                if (mid == 0 or arr[mid] != arr[mid-1])
                {
                    return mid;
                }
                else 
                {
                    start = mid-1;
                }
            }
        }
        return n;
    }
};
