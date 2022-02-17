queue<int> rev(queue<int> q)
{
    // add code here.
    vector<int> v;
    queue<int> result;
    while (q.empty() != true)
    {
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        result.push(v[i]);
    }
    return result;
}
