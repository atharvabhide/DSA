class Solution
{
    public:
    long long findMinDiff(vector<long long> arr, long long n, long long m)
    {
        //sort the array
        //consider every ith element as the minimum element and find its maximum in its set of m elements
        //get the difference between these maximum and minimum
        //get the minimum possible difference
        sort(arr.begin(), arr.end());
        long long result = arr[m-1]-arr[0];
        for (int i = 1; i+m-1 < n; i++)
        {
            long long res = arr[i+m-1]-arr[i];
            result = min(res, result);
        }
        return result;
    }   
};
