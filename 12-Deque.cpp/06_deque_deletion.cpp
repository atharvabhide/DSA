void eraseAt(deque <int> &deq, int X)
{
    // your code here
    auto it = deq.begin();
    advance(it,X);
    it = deq.erase(it);
}

//Function to erase the elements in range start (inclusive), end (exclusive).
void eraseInRange(deque<int> &deq, int start, int end)
{
    // your code here
    if (start != end)
    {
        auto it1 = deq.begin();
        auto it2 = deq.begin();
        advance(it1,start);
        advance(it2,end);
        it1 = deq.erase(it1,it2);
    }
}

//Function to erase all the elements in the deque.
void eraseAll(deque<int> &deq)
{
   // your code here
   deq.clear();
}
