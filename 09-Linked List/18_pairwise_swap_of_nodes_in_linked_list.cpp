struct Node* pairwise_swap(struct Node* head)
{
    Node* temp = head;
    while (temp->next != NULL and temp != NULL)
    {
        swap(temp->data, temp->next->data);
        if (temp->next->next == NULL)
        {
            break;
        }
        temp = temp->next->next;
    }
    return head;
}
