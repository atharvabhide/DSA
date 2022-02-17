class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_set<int> hash;
        Node* temp = head;
        Node* res = new Node(0); // dummy node
        Node* x = res;
        while (temp != NULL)
        {
            if (hash.find(temp->data) == hash.end())
            {
                x->next = new Node(temp->data);
                x = x->next;
            }
            hash.insert(temp->data);
            temp = temp->next;
        }
        return res->next; // removing the dummy node
    }
};
