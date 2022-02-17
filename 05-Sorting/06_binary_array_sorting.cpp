class Solution
{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int arr[], int n)
    {
        // two pointer approach
        int i = 0;
        int j = n-1;
        while (i <= j)
        {
            if (arr[i] == 1 and arr[j] == 0)
            {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
            else if (arr[i] == 0 and arr[j] == 1)
            {
                i++;
            }
            else if (arr[i] == 0 and arr[j] == 0)
            {
                i++;
            }
            else if (arr[i] == 1 and arr[j] == 1)
            {
                j--;
            }
        }
    }
};
