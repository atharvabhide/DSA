class Solution 
{
  public:
    // Function to insert all elements of the array in deque.
    deque<int> deque_Init(int arr[], int n) 
    {
        // add your code here
        deque<int> result;
        for (int i = 0; i < n; i++)
        {
            result.push_back(arr[i]);
        }
        return result;
    }
};
