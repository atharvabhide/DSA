class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        string s1 = str1.substr(0, 2);
        string s2 = str1.substr(str1.size()-2,2);
        str1.erase(0,2);
        str1.erase(str1.size()-2, 2);
        if (str2 == (str1+s2+s1) || str2 == (s2+s1+str1))
        {
            return true;
        }
        return false;
    }
};
