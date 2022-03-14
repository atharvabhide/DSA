class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        unordered_map<char,int> hash;
        hash['^'] = 3;
        hash['*'] = 2;
        hash['/'] = 2;
        hash['+'] = 1;
        hash['-'] = 1;
        
        stack<char> mystack;
        
        string res = "";
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' and s[i] <= 'z')
            {
                res += s[i];
            }
            
            else if (s[i] == '(')
            {
                mystack.push(s[i]);
            }
            
            else if (s[i] == ')')
            {
                while (mystack.top() != '(')
                {
                    res += mystack.top();
                    mystack.pop();
                }
                mystack.pop();
            }
            
            else
            {
                while (mystack.empty() != true and hash[mystack.top()] >= hash[s[i]] and s[i] != '^')
                {
                    res += mystack.top();
                    mystack.pop();
                }
                mystack.push(s[i]);
            }
        }
        
        while (mystack.empty() != true)
        {
            res += mystack.top();
            mystack.pop();
        }
        
        return res;
    }
};
