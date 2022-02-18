class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        stack<int> mystack;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= '9' && s[i] >= '0')
            {
                mystack.push(int(s[i])-'0');
            }
            else if (s[i] == '+')
            {
                int op1 = mystack.top();
                mystack.pop();
                int op2 = mystack.top();
                mystack.pop();
                mystack.push(op2+op1);
            }
            else if (s[i] == '-')
            {
                int op1 = mystack.top();
                mystack.pop();
                int op2 = mystack.top();
                mystack.pop();
                mystack.push(op2-op1);
            }
            else if (s[i] == '*')
            {
                int op1 = mystack.top();
                mystack.pop();
                int op2 = mystack.top();
                mystack.pop();
                mystack.push(op2*op1);
            }
            else if (s[i] == '/')
            {
                int op1 = mystack.top();
                mystack.pop();
                int op2 = mystack.top();
                mystack.pop();
                mystack.push(op2/op1);
            }
        }
        return mystack.top();
    }
};
