Node* insertInMiddle(Node* head, int x)
{
	int mid;
	int length = 0;
	Node* temp = head;
	while (temp != NULL)
	{
	    length++;
	    temp = temp->next;
	}
	if (length % 2 == 0)
	{
	    mid = (length/2)-1;
	}
	else
	{
	    mid = length/2;
	}
	int count = 0;
	temp = head;
	while (count != mid)
	{
	    temp = temp->next;
	    count++;
	}
	Node* a = new Node(x);
	a->next = temp->next;
	temp->next = a;
	return head;
}
