class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	
	void dfs(int u, vector<int> graph[], int V, stack<int> &s, vector<bool> &visited1)
	{
	    visited1[u] = true;
	    for (int v = 0; v < graph[u].size(); v++)
	    {
	        if (visited1[graph[u][v]] == false)
	        {
	            dfs(graph[u][v], graph, V, s, visited1);
	        }
	    }
	    s.push(u);
	}
	
	void dfs_normal(int u, vector<int> transpose[], int V, vector<bool> &visited2)
	{
	    visited2[u] = true;
	    for (int v = 0; v < transpose[u].size(); v++)
	    {
	        if (visited2[transpose[u][v]] == false)
	        {
	            dfs_normal(transpose[u][v], transpose, V, visited2);
	        }
	    }
	}
	
    int kosaraju(int V, vector<int> graph[])
    {
        // step 1
        vector<bool> visited1(V, false);
        stack<int> s;
        for (int i = 0; i < V; i++)
        {
            if (visited1[i] == false)
            {
                dfs(i, graph, V, s, visited1);
            }
        }
        vector<int> res;
        while (s.empty() != true)
        {
            res.push_back(s.top());
            s.pop();
        }
        
        // step 2
        vector<int> transpose[V];
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < graph[i].size(); j++)
            {
                transpose[graph[i][j]].push_back(i);
            }
        }
        
        // step 3
        vector<bool> visited2(V, false);
        int count = 0;
        for (int i = 0; i < res.size(); i++)
        {
            if (visited2[res[i]] == false)
            {
                dfs_normal(res[i], transpose, V, visited2);
                count++;
            }
        }
        return count;
    }
};
