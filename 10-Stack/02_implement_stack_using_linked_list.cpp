// insertion and deletion from the FRONT
//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    if (top == NULL) 
    {
        top = new StackNode(x);
        return;
    }
    StackNode* temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if (top == NULL)
    {
        return -1;
    }
    StackNode* temp = top;
    top = top->next;
    return temp->data;
}
