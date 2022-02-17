class Solution
{
  public:
    //Function to check whether the list is palindrome.
    Node* middle(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        while (curr != NULL)
        {
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        Node* mid = middle(head);
        mid = reverse(mid);
        Node* temp = head;
        while (temp != mid and mid != NULL)
        {
            if (temp->data != mid->data)
            {
                return false;
            }
            temp = temp->next;
            mid = mid->next;
        }
        return true;
    }
};
