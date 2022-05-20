class Solution 
{
  public:
    // Function to detect cycle in a directed graph.
    // maintain a calls vector along with the visited vector
    // calls is used to get whether the recursive call is active or not, so that we can determine the back edge easily.
    void dfs(vector<int> adj[], vector<bool> &visited, vector<bool> &calls, int source, bool &flag)
    {
        visited[source] = true;
        calls[source] = true;
        for (int i = 0; i < adj[source].size(); i++)
        {
            if (calls[adj[source][i]] == true)
            {
                flag = true;
                return;
            }
            else if (visited[adj[source][i]] == false)
            {
                dfs(adj, visited, calls, adj[source][i], flag);
            }
        }
        calls[source] = false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<bool> visited(V, false);
        vector<bool> calls(V, false);
        bool flag = false;
        for (int i = 0; i < V; i++)
        {
            if (visited[i] == false)
            {
                dfs(adj, visited, calls, i, flag);   
            }
        }
        return flag;
    }
};
