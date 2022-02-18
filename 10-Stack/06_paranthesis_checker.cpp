class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    // keep on pushing opening brackets in a stack
    // if we hit a closing bracket,and stack is not empty then compare it with the top of the stack
    //  if the brackets match, pop the stack
    //  else return false
    // keep on doing this for the entire string
    // at the end if stack is 
    //  empty- return true
    //  not empty- return false
    // if string has first character as closing bracket straightaway return false
    
    bool ismatching(char a, char b)
    {
        if ((a == '(' and b == ')') or (a == '[' and b == ']') or (a == '{' and b == '}'))
        {
            return true;
        }
        return false;
    }
    
    bool ispar(string x)
    {
        stack<char> s;
        if (x[0] == ')' or x[0] == ']' or x[0] == '}')
        {
            return false;
        }
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '(' or x[i] == '[' or x[i] == '{')
            {
                s.push(x[i]);
            }
            else
            {
                if (s.empty() == true)
                {
                    return false;
                }
                if (ismatching(s.top(), x[i]) == true)
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (s.empty() == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
