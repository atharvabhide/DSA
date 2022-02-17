class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        // two-pointer approach
        // revise from the video if needed
        int i = 0;
        int j = 0;
        while (i < B.size() and j < A.size())
        {
            if (A[j] == B[i])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if (j == A.size())
        {
            return true;
        }
        return false;
    }
};
