class Solution
{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) 
    {
        // easy problem just handle the corner cases
        if (head == NULL)
        {
            head = new Node(data);
            return head;
        }
        Node* x = new Node(data);
        Node* temp = head;
        if (head->data > data)
        {
            x->next = head;
            head = x;
            return head;
        }
        while (temp->next != NULL and temp->next->data < data)
        {
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            temp->next = x;
            return head;
        }
        x->next = temp->next;
        temp->next = x;
        return head;
    }
};
