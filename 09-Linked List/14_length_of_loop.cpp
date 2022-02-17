int countNodesinLoop(struct Node *head)
{
    // just use floyd cycle detection
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
    if (slow != fast) return 0;
    int count = 1;
    slow = slow->next;
    while (slow != fast)
    {
        count++;
        slow = slow->next;
    }
    return count;
}
