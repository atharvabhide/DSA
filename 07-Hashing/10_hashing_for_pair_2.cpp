int sumExists(int arr[], int N, int sum) 
{
    // Your code here
    unordered_set<int> us;
    for (int i = 0; i < N; i++)
    {
        if (us.find(sum-arr[i]) != us.end())
        {
            return 1;
        }
        else
        {
            us.insert(arr[i]);
        }
    }
    return 0;
}
