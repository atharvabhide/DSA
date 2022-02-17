class Solution
{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        int mid = N/2;
        if (N % 2 == 0)
        {
            return floor((A[mid]+A[mid-1])/2);
        }
        else
        {
            return A[mid];
        }
        //your code here
        //If median is in fraction then convert it to integer and return
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int result = 0;
        for (int i = 0; i < N; i++)
        {
            result += A[i];
        }
        return result/N;
    }
};
