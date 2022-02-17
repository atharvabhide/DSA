class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        string result;
        reverse(s.begin(),s.end());
        stack<char> mystack;
        mystack.push(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != mystack.top())
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
