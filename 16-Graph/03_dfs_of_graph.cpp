class Solution 
{
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(vector<int> adj[], int source, bool visited[], vector<int> &v)
    {
        visited[source] = true;
        v.push_back(source);
        for (int i = 0; i < adj[source].size(); i++)
        {
            if (visited[adj[source][i]] == false)
            {
                dfs(adj, adj[source][i], visited, v);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int> v;
        bool visited[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
        dfs(adj, 0, visited, v);
        return v;
    }
};
