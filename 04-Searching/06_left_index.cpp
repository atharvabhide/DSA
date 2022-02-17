int leftIndex(int n, int arr[], int x)
{
    int start = 0;
    int end = n-1;
    while (start < end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid] == x and arr[mid-1] == x)
        {
            end = mid - 1;
        }
        else if (arr[mid] == x and arr[mid-1] != x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
    }
    if (arr[end] == x)
    {
        return end;
    }
    return -1;
}
