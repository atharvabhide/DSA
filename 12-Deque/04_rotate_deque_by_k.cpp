void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        v.push_back(deq[0]);
        deq.pop_front();
    }
    for (int i = 0; i < k; i++)
    {
        deq.push_back(v[i]);
    }
}

void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    vector<int> v;
    for (int i = n-1; i > n-1-k; i--)
    {
        v.push_back(deq[i]);
        auto it = deq.begin();
        advance(it,i);
        it = deq.erase(it);
    }
    for (int i = 0; i < k; i++)
    {
        deq.push_front(v[i]);
    }
}
