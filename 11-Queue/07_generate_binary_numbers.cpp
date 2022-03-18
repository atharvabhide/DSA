vector<string> generate(int N)
{
	vector<string> result;
	
	queue<string> q;
	
	q.push("1");
	
	for (int i = 0; i < N; i++)
	{
	    result.push_back(q.front());
	    q.push(q.front()+"0");
	    q.push(q.front()+"1");
	    q.pop();
	}
	return result;
}
