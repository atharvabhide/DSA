class Solution
{
public:
    //Function to find the days of buying and selling stock for max profit.
    // if the stock is going down let it go down
    // if the stock has gone up from the previous price, get the profit
    vector<vector<int>> stockBuySell(vector<int> arr, int n)
    {
        vector<vector<int>> result;
        for (int i = 1; i < n; i++)
        {
            vector<int> v;
            if (arr[i] > arr[i-1])
            {
                v.push_back(i-1);
                v.push_back(i);
                result.push_back(v);
            }
        }
        return result;
    }
};
