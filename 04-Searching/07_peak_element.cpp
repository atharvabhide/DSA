class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
      // if left element is greater then the peak is on the left side
      // if right element is greater then the peak is on the right side
       int start = 0;
       int end = n-1;
       while (start <= end)
       {
           int mid = start + (end-start)/2;
           if ((mid == 0 or arr[mid-1] <= arr[mid]) and (mid == n-1 or arr[mid+1] <= arr[mid]))
           {
               return mid;
           }
           if (arr[mid-1] > arr[mid])
           {
               end = mid-1;
           }
           else 
           {
               start = mid+1;
           }
       }
       return -1;
    }
};
