class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int lomuto_partition(int arr[], int l, int r)
    {
        int pivot = arr[r];
        int i = l-1;
        for (int j = l; j < r; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i+1], arr[r]);
        return (i+1);
    }
    int kthSmallest(int arr[], int n, int k)
    {
        int l = 0;
        int r = n-1;
        while (l <= r)
        {
            int p = lomuto_partition(arr,l,r);
            if (p == k-1)
            {
                return arr[p];
            }
            else if (p > k-1)
            {
                r = p-1;
            }
            else
            {
                l = p+1;
            }
        }
        return -1;
    }
};
