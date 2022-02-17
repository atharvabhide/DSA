bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    Node *temp1 = head1;
	Node *temp2 = head2;
	bool flag = false;
	while (temp1 != NULL or temp2 != NULL)
	{
	    if (temp1->data == temp2->data)
	    {
	        flag = true;
	        temp1 = temp1->next;
	        temp2 = temp2->next;
	    }
	    else
	    {
	        flag = false;
	        return flag;
	    }
	}
	if (temp1 == NULL and temp2 == NULL)
	{
	    if (flag == true)
	    {
	        return true;
	    }
	    else
	    {
	        return false;
	    }
	}
	else
	{
	    return false;
	}
}
