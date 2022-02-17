class Solution
{
    public:
    int search(int arr[], int start, int end, int x)
    {
        while (start <= end)
        {
            int mid = start + (end-start)/2;
            if (arr[mid] == x)
            {
                return mid;
            }
            if (arr[start] < arr[mid])
            {
                if (arr[start] <= x and x <= arr[mid])
                {
                    end = mid-1;
                }
                else 
                {
                    start = mid+1;
                }
            }
            else 
            {
                if (arr[mid] <= x and x <= arr[end])
                {
                    start = mid+1;
                }
                else 
                {
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};
