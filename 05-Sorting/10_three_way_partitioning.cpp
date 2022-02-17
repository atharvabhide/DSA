class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        //classic "dutch national flag algorithm" application
        int n = arr.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while (mid <= high)
        {
            if (arr[mid] < a)
            {
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if (arr[mid] > b)
            {
                swap(arr[mid], arr[high]);
                high--;
            }
            else
            {
                mid++;
            }
        }
    }
};
