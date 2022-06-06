class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // kahn's bfs based algorithm
	    vector<int> indegree(V, 0);
	    for (int i = 0; i < V; i++)
	    {
	        for (int j = 0; j < adj[i].size(); j++)
	        {
	            indegree[adj[i][j]]++;
	        }
	    }
	    
	    queue<int> q;
	    for (int i = 0; i < indegree.size(); i++)
	    {
	        if (indegree[i] == 0)
	        {
	            q.push(i);
	        }
	    }
	    
	    vector<int> res;
	    while (q.empty() != true)
	    {
	        int u = q.front();
	        q.pop();
	        res.push_back(u);
	        for (int v = 0; v < adj[u].size(); v++)
	        {
	            indegree[adj[u][v]]--;
	            if (indegree[adj[u][v]] == 0)
	            {
	                q.push(adj[u][v]);
	            }
	        }
	    }
	    return res;
	}
};
