void rotateArr(int arr[], int d, int n)
{
        // reversal algorithm
        reverse(arr, arr+d);
        reverse(arr+d, arr+n);
        reverse(arr, arr+n);
}
