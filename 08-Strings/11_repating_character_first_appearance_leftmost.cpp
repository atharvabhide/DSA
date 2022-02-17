class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        unordered_map<char,int> hash;
        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (hash[s[i]] > 1)
            {
                return i;
            }
        }
        return -1;
    } 
};
