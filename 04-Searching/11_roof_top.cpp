class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int arr[], int n)
    {
        //simple linear search
        int res = 0;
        int count = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] < arr[i+1])
            {
                count++;
                res = max(res,count);
            }
            else 
            {
                count = 0;
            }
        }
        return res;
    }
};
