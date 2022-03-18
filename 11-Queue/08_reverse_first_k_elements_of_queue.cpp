queue<int> modifyQueue(queue<int> q, int k) 
{
    queue<int> result;
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        result.push(v[i]);
    }
    while (q.empty() != true)
    {
        result.push(q.front());
        q.pop();
    }
    return result;
}
