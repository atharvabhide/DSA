class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        stack<int> mystack;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '*' and s[i] != '/' and s[i] != '+' and s[i] != '-')
            {
                int x = s[i]-'0';
                mystack.push(x);
            }
            
            else
            {
                int op1 = mystack.top();
                mystack.pop();
                int op2 = mystack.top();
                mystack.pop();
                
                switch (s[i])
                {
                    case '*':
                        mystack.push(op2*op1);
                        break;
                    case '/':
                        mystack.push(op2/op1);
                        break;
                    case '+':
                        mystack.push(op2+op1);
                        break;
                    case '-':
                        mystack.push(op2-op1);
                        break;
                    default:
                        break;
                }
            }
        }
        
        return mystack.top();
    }
};
