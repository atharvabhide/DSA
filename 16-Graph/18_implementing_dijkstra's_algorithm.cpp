class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> graph[], int S)
    {
        vector<int> dist(V, INT_MAX);
        vector<int> fixed(V, false);
        dist[S] = 0;
        
        for (int i = 1; i < V; i++)
        {
            int u = -1;
            // picking minimum weight vertex from dist array
            for (int i = 0; i < V; i++)
            {
                if (fixed[i] == false and (u == -1 || dist[i] < dist[u]))
                {
                    u = i;
                }
            }
            
            fixed[u] = true;
            
            // relaxing adjacent vertices of recently fixed vertex i.e u
            for (auto v : graph[u])
            {
                int to = v[0];
                int w = v[1];
                
                // relax operation
                if (fixed[to] == false and dist[to] > dist[u] + w)
                {
                    dist[to] = dist[u] + w;
                }
            }
        }
        
        return dist;
    }
};
