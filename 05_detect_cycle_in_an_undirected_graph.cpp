class Solution 
{
  public:
    // Function to detect cycle in an undirected graph.
    
    void dfs(vector<int> adj[], vector<bool> &visited, int source, int parent, bool &flag)
    {
        visited[source] = true;
        for (int i = 0; i < adj[source].size(); i++)
        {
            if (adj[source][i] != parent)
            {
                if (visited[adj[source][i]] == true)
                {
                    flag = true;
                }
            }
            
            if (visited[adj[source][i]] == false)
            {
                dfs(adj, visited, adj[source][i], source, flag);
            }
        }
    }
    
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<bool> visited(V, false);
        int source = 0;
        int parent = 0;
        bool flag = false;
        // loop used for handling disconnected graphs! if connected graph is given only one dfs call is sufficient!
        for (int i = 0; i < V; i++)
        {
            if (visited[i] == false)
            {
                dfs(adj, visited, i, 0, flag);
            }
        }
        return flag;
    }
};
