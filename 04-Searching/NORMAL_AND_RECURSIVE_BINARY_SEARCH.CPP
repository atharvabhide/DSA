// NORMAL
int binary_search(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == x)
			return mid;

		else if(arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}

// RECURSIVE
int binary_search(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            return binary_search(arr,mid + 1,end,x);
        }
        else if (x < arr[mid])
        {
            return binary_search(arr,start,mid - 1,x);
        }
    }
    return -1;
}
