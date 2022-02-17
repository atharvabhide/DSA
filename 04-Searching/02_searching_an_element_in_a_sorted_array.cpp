class Solution
{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
        int start = 0;
        int end = n-1;
        while (start <= end)
        {
            int mid = start + (end-start)/2;
            if (arr[mid] == k)
            {
                return 1;
            }
            else if (k > arr[mid])
            {
                start = mid + 1;
            }
            else if (k < arr[mid])
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};
