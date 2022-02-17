int sumExists(int arr[], int N, int sum) 
{
    // Your code here.
    unordered_set<int> us;
    for (int i = 0; i < N; i++)
    {  
        int x = sum - arr[i];
        if (us.find(x) != us.end())
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
