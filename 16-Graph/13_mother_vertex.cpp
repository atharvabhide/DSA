class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    // use dfs, quite easy problem
    void dfs(int u, vector<int> adj[], bool visited[], int V)
    {
        visited[u] = true;
        for (int v = 0; v < adj[u].size(); v++)
        {
            if (visited[adj[u][v]] == false)
            {
                dfs(adj[u][v], adj, visited, V);
            }
        }
    }
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	    bool visited[V] = {false};
	    
	    for (int i = 0; i < V; i++)
	    {
	        dfs(i, adj, visited, V);
	        bool flag = true;
	        for (int i = 0; i < V; i++)
	        {
	            if (visited[i] == false)
	            {
	                flag = false;
	                break;
	            }
	        }
	        if (flag == true)
	        {
	            return i;
	        }
	        fill(visited, visited+V, false);
	    }
	    return -1;
	}
};
