class Solution
{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
       // based on kadane's algorithm
       // start from the second element of the array
       // check if the current element is alternating with the previous element.
       // if yes increment the current subarray length, and keep on taking the max of result and current 
       // if no then set the current subarray length to 1
       int result = 1;
       int current = 1;
       for (int i = 1; i < n; i++)
       {
           if ((arr[i] % 2 == 0 and arr[i-1] % 2 == 1) or (arr[i] % 2 == 1 and arr[i-1] % 2 == 0))
           {
               current++;
               result = max(result, current);
           }
           else
           {
               current = 1;
           }
       }
       return result;
    } 
};
