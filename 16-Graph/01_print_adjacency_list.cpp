class Solution 
{
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int> res;
        bool visited[V];
        for (int i = 0; i < V; i++)
        {
            visited[i]  = false;
        }
        queue<int> q;
        visited[0] = true;
        q.push(0);
        while (q.empty() != true)
        {
            int u = q.front();
            q.pop();
            res.push_back(u);
            for (int i = 0; i < adj[u].size(); i++)
            {
                if (visited[adj[u][i]] == false)
                {
                    visited[adj[u][i]] = true;
                    q.push(adj[u][i]);
                }
            }
        }
        return res;
    }
};
