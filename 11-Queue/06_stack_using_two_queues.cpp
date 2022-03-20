/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.

// q1 is used as the stack and q2 is just the auxiliary queue
void QueueStack :: push(int x)
{
    while (q1.empty() != true)
    {
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while (q2.empty() != true)
    {
        q1.push(q2.front());
        q2.pop();
    }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if (q1.empty() == true)
    {
        return -1;
    }
    int res = q1.front();
    q1.pop();
    return res;
}