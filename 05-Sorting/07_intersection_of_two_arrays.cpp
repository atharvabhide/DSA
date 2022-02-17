class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int n, int m) 
    { 
        // similar to "merge two sorted arrays" concept
        vector<int> result;
        int i = 0; 
        int j = 0;
        while (i < n and j < m)
        {
            if (arr1[i] == arr1[i-1])
            {
                i++;
                if (arr2[j] == arr2[j-1])
                {
                    j++;
                }
            }
            else if (arr1[i] == arr2[j])
            {
                result.push_back(arr1[i]);
                i++;
                j++;
            }
            else if (arr1[i] < arr2[j])
            {
                i++;
            }
            else if (arr2[j] < arr1[i])
            {
                j++;
            }
        }
        if (result.size() == 0)
        {
            result.push_back(-1);
        }
        return result;
    }

};
