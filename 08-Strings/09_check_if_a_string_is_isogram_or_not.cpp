class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        unordered_set<int> hash;
        for (int i = 0; i < s.size(); i++)
        {
            if (hash.find(s[i]) != hash.end())
            {
                return false;
            }
            else
            {
                hash.insert(s[i]);
            }
        }
        return true;
    }
};
