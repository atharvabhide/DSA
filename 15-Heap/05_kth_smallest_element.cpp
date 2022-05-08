class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }
        int i = 1;
        while (i != k)
        {
            pq.pop();
            i++;
        }
        return pq.top();
    }
};
