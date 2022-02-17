void addNode(Node *head, int pos, int data)
{
   Node* x = new Node(data);
   int count = 0;
   Node* temp =  head;
   while (count != pos)
   {
       temp = temp->next;
       count++;
   }
   if (temp->next == NULL)
   {
       temp->next = x;
       x->prev = temp;
   }
   else
   {
       x->next = temp->next;
       temp->next = x;
       x->prev = temp;
   }
}
