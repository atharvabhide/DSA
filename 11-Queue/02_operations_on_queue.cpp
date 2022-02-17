class Solution
{
    public:
    
    //Function to push an element in queue.
    void enqueue(queue<int> &q,int x)
    {
       //Your code here
       q.push(x);
    }
     
    //Function to remove front element from queue.
    void dequeue(queue<int> &q)
    {
        //Your code here
        q.pop();
    }
    
    //Function to find the front element of queue.
    int front(queue<int> &q)
    {
        //Your code here
        return q.front();
    }
    
    //Function to find an element in the queue.
    string find(queue<int> q, int x)
    {
        //Your code here
        while (q.empty() != true)
        {
            if (q.front() == x)
            {
                return "Yes";
            }
            q.pop();
        }
        return "No";
    }
};
