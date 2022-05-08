class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }
        int i = 0;
        vector<int> res;
        while (i != k)
        {
            res.push_back(pq.top());
            pq.pop();
            i++;
        }
        return res;
    }
};
