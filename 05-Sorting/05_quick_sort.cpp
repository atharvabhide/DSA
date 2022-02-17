class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
           int p = partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high); 
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        //lomuto partition
        int pivot = arr[high];
        int i = low-1;
        for (int j = low; j <= high-1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i+1], arr[high]);
        return (i+1);
    }
};
