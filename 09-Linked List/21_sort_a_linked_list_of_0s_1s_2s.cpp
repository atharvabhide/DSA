class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) 
    {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        Node* temp = head;
        while (temp != NULL)
        {
            if (temp->data == 0)
            {
                count0++;
            }
            else if (temp->data == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
            temp = temp->next;
        }
        temp = head;
        int x = 0;
        while (x != count0)
        {
            temp->data = 0;
            temp = temp->next;
            x++;
        }
        x = 0;
        while (x != count1)
        {
            temp->data = 1;
            temp = temp->next;
            x++;
        }
        x = 0;
        while (x != count2)
        {
            temp->data = 2;
            temp = temp->next;
            x++;
        }
        return head;
    }
};
