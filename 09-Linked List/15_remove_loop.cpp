class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                break;
            }
        }
        if (slow != fast)
        {
            return;
        }
        else
        {
            slow = head;
            // this check is needed when slow
            // and fast both meet at the head of the LL
            // eg: 1->2->3->4->5 and then
            // 5->next = 1 i.e the head of the LL
            // i.e if slow and fast are now both 1, then we go to the last node by using only fast
            if(slow == fast) 
            {
                while(fast->next != slow) fast = fast->next;
            }
            else
            {
                while (slow->next != fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
        }
        fast->next = NULL;
    }
};
