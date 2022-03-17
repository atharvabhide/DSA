/* 

The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */

//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
    if (rear > 100004)
    {
        return;
    }
    arr[rear] = x;
    rear++;
    return;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    if (front == 0 and rear == 0)
    {
        return -1;
    }
    if (front == rear)
    {
        return -1;
    }
    int temp = arr[front];
    front++;
    return temp;
}
