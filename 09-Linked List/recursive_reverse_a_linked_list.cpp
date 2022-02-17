Node* recRev(Node* curr, Node* prev)
{
  // is similar to iterative solution
  // when we are at nth node we have already reversed n-1 nodes
  if (curr == NULL) return prev; // base case
  Node* temp = curr->next;
  curr->next = prev;
  recRev(temp, curr);
}
