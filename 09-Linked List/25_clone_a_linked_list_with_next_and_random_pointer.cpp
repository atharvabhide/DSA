class Solution 
{
public:
    Node* copyRandomList(Node* head) 
    {
        unordered_map<Node*, Node*> hash;
        Node* temp = head;
        while (temp != NULL)
        {
            hash[temp] = new Node(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL)
        {
            hash[temp]->next = hash[temp->next];
            hash[temp]->random = hash[temp->random];
            temp = temp->next;
        }
        return hash[head];
    }
};
