class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // bfs based problem
	    vector<int> levels(V, -1);
	    queue<int> q;
	    vector<bool> visited(V, false);
	    
	    levels[0] = 0;
	    q.push(0);
	    visited[0] = true;
	    
	    while (q.empty() != true)
	    {
	        int u = q.front();
	        q.pop();
	        for (int v = 0; v < adj[u].size(); v++)
	        {
	            if (visited[adj[u][v]] == false)
	            {
	                q.push(adj[u][v]);
	                levels[adj[u][v]] = levels[u] + 1;
	                visited[adj[u][v]] = true;
	            }
	        }
	    }
	    if (X > V-1)
	    {
	        return -1;
	    }
	    return levels[X];
	}
};
