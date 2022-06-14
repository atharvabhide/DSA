/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    static bool cmp(Item i1, Item i2)
    {
        double r1 = double(i1.value) / double(i1.weight);
        double r2 = double(i2.value) / double(i2.weight);
        return r1 > r2;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // sort the items in decreasing order of value/weight ratio
        sort(arr, arr+n, cmp);
        double result = 0.0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].weight <= W)
            {
                result += arr[i].value;
                W -= arr[i].weight;
            }
            else
            {
                result += W*double(arr[i].value)/double(arr[i].weight);
                return result;
            }
        }
        return result;
    }
};
