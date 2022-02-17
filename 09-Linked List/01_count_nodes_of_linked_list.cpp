class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head)
    {
    
        //Code here
        int count = 0;
        while (head != nullptr)
        {
            count++;
            head = head->next;
        }
        return count;
    }
};
