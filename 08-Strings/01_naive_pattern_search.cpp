class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
        if (txt.find(pat) == string::npos)
        {
            return false;
        }
        return true;
    }
};
