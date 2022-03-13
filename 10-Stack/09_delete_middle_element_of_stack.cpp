class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int mid = ceil(sizeOfStack/2.0);
        stack<int> mystack;
        while (s.empty() != true)
        {
            mystack.push(s.top());
            s.pop();
        }
        int count = 1;
        while (mystack.empty() != true)
        {
            if (count != mid)
            {
                s.push(mystack.top());
            }
            count++;
            mystack.pop();
        }
    }
};
