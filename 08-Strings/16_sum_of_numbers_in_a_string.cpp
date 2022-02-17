class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string s)
    {
	    int sum = 0;
        string str = "";
        s = s + " ";
        
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(isdigit(ch)) 
            str += ch;
            else if(str.length() > 0)
            {
              sum += stoi(str);
              str = "";
            }
        }
        return sum;
    }
};
