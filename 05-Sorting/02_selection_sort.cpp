class Solution
{
    // the smallest element in the unsorted array is found in every iteration
    // the i'th element is considered smallest initially
    // then swapping is done
    public:
    int select(int arr[], int i, int n)
    {
        int minimum = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        return minimum;
    }
    void selectionSort(int arr[], int n)
    {
       for (int i = 0; i < n; i++)
       {
           int minimum = select(arr,i,n);
           int temp = arr[i];
           arr[i] = arr[minimum];
           arr[minimum] = temp;
       }
    }
};
