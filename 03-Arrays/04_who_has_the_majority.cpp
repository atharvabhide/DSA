class Solution
{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        int counter_x = 0;
        int counter_y = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                counter_x++;
            }
            else if (arr[i] == y)
            {
                counter_y++;
            }
        }
        if (counter_x > counter_y)
        {
            return x;
        }
        else if (counter_y > counter_x)
        {
            return y;
        }
        else
        {
            return min(x,y);
        }
    }
};
