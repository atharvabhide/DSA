class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    
    vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
    
    void helper(int a[], int N, string temp, int i)
    {
        if (i == N)
        {
            res.push_back(temp);
            return;
        }
        for (int j = 0; j < keys[a[i]].size(); j++)
        {
            helper(a, N, temp+keys[a[i]][j], i+1);
        }
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        helper(a, N, "", 0);
        return res;
    }
};
