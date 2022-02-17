https://www.youtube.com/watch?v=aDX3MFL0tYs
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int h)
    {
        int i = l;
        int j = mid+1;
        int k = l;
        int temp[h+1];
        while (i <= mid and j <= h)
        {
            if (arr[i] <= arr[j])
            {
                temp[k] = arr[i];
                i++;
            }
            else
            {
                temp[k] = arr[j];
                j++;
            }
            k++;
        }
        while (i <= mid)
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        while (j <= h)
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
        for (int i = l; i <= h; i++)
        {
            arr[i] = temp[i];
        }
    }
  
    void mergeSort(int arr[], int l, int h)
    {
        if (l < h)
        {
            int mid = l + (h-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,h);
            merge(arr,l,mid,h);
        }
    }
};
