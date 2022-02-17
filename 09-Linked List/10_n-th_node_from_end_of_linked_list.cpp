int getNthFromLast(Node *head, int n)
{
    int length = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    if (n > length)
    {
        return -1;
    }
    int x = length-n;
    int count = 0;
    temp = head;
    while (count != x)
    {
        temp = temp->next;
        count++;
    }
    return temp->data;
}
