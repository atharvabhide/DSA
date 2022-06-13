class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> graph[])
    {
        vector<int> keys(V, INT_MAX); // stores the weights 
        vector<bool> inMST(V, false); // acts like visited array
        int cost = 0;
        keys[0] = 0;
        
        for (int i = 0; i < V; i++)
        {
            int u = -1;
            // getting the minimum weight vertex
            for (int j = 0; j < V; j++)
            {
                if (inMST[j] == false && (u == -1 || keys[j] < keys[u]))
                {
                    u = j;
                }
            }
            
            // adding minimum weight vertex to mst
            inMST[u] = true;
            cost += keys[u];
            
            
            // updating weights of vertices adjacent to current minimum weight vertex i.e. u
            for (auto x : graph[u])
            {
                int v = x[0];
                int w = x[1];
                if (inMST[v] == false and w < keys[v])
                {
                    keys[v] = w;
                }    
            }
        }

        return cost;
    }
};
