class Solution
{
  public:
    string reverseWords (string s)
    {
        string result = "";
        stack<char> mystack;
        int i = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                while (mystack.empty() != true)
                {
                    result += mystack.top();
                    mystack.pop();
                }
                result += s[i];
            }
            if (s[i] != '.')
            {
                mystack.push(s[i]);
            }
        }
        while (mystack.empty() != true)
        {
            result += mystack.top();
            mystack.pop();
        }
        return result;
    }
};
