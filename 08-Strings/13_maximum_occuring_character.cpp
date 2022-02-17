class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char count[256] = {0};
        for (int i = 0; i < str.size(); i++)
        {
            count[str[i]]++;
        }
        int x = count[97];
        char res = 'a';
        for (int i = 98; i <= 123; i++)
        {
            if (count[i] > x)
            {
                x = count[i];
                res = i;
            }
            else if (count[i] == x)
            {
                res = min(res, char(i));
            }
        }
        return res;
    }
};
