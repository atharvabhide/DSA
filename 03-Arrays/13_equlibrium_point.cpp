int equilibriumPoint(long long arr[], int n) 
{
        // calculate total sum of the array
        // get left sum and right sum for every index
        // compare the left sum and right sum
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        int left_sum = 0;
        int right_sum = sum;
        for (int i = 0; i < n; i++)
        {
            right_sum = right_sum-arr[i];
            if (left_sum == right_sum)
            {
                return i+1;
            }
            left_sum += arr[i];
        }
        return -1;
}
