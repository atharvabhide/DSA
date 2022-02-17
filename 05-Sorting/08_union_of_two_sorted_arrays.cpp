class Solution
{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // quite similar to "merge two sorted arrays" problem
        vector<int> result;
        int i = 0; 
        int j = 0;
        while (i < n and j < m)
        {
            if (result.size() == 0)
            {
                if (arr1[i] < arr2[j])
                {
                    result.push_back(arr1[i]);
                    i++;
                }
                else if (arr2[j] < arr1[i])
                {
                    result.push_back(arr2[j]);
                    j++;
                }
                else if (arr1[i] == arr2[j])
                {
                    result.push_back(arr1[i]);
                    i++;
                    j++;
                }
            }
            else 
            {
                if (arr1[i] == result.back())
                {
                    i++;
                    if (arr2[j] == result.back())
                    {
                        j++;
                    }
                }
                else if (arr2[j] == result.back())
                {
                    j++;
                    if (arr1[i] == result.back())
                    {
                        i++;
                    }
                }
                else if (arr1[i] < arr2[j])
                {
                    result.push_back(arr1[i]);
                    i++;
                }
                else if (arr2[j] < arr1[i])
                {
                    result.push_back(arr2[j]);
                    j++;
                }
                else if (arr1[i] == arr2[j])
                {
                    result.push_back(arr1[i]);
                    i++;
                    j++;
                }
            }
        }
        while (i < n)
        {
            if (result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }
        while (j < m)
        {
            if (result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }
            j++;
        }
        return result;
    }
};
