/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    if (s1.empty() == true)
    {
        return -1;
    }
    while (s1.size() != 1)
    {
        s2.push(s1.top());
        s1.pop();
    }
    int res = s1.top();
    s1.pop();
    while (s2.empty() != true)
    {
        s1.push(s2.top());
        s2.pop();
    }
    return res;
}
