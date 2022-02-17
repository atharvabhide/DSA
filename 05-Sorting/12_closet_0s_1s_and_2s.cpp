class Solution{
    public:
    
    // The function should do the stated modifications in the given array arr[]
    // Do not return anything.
    
    // arr[]: Input Array
    // N: Size of the Array arr[]
    //Function to segregate 0s, 1s and 2s in sorted increasing order.
    void segragate012(int arr[], int n)
    {
        //https://www.youtube.com/watch?v=oaVa-9wmpns
        //revise the course video as well
        //dutch national flag algorithm
        //int low = 0, int mid = 0, int high = n-1
        //arr[0....low-1] = 0
        //arr[low....mid-1] = 1
        //arr[mid....high] = unknown
        //arr[high+1....n-1] = 2
        int low = 0;
        int mid = 0;
        int high = n-1;
        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else if (arr[mid] == 2)
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};
