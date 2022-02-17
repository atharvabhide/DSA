class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // i goes till n-1
        // j goes till n-i-1
        // if arr[j] > arr[j+1] then swap
        // is a stable algo, in-place as well
        // use a flag for optimization
        // if no swaps happen then the array is already sorted
        for (int i = 0; i < n-1; i++)
        {
           bool flag = false;
           for (int j = 0; j < n-i-1; j++)
           {
               if (arr[j] > arr[j+1])
               {
                   int temp = arr[j];
                   arr[j] = arr[j+1];
                   arr[j+1] = temp;
                   flag = true;
               }
           }
           if (flag == false)
           {
               break;
           }
        }
    }
};
