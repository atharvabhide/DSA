class Solution 
{
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges)
	{
	    // bellman ford algorithm
	    // refer article for revision as well
	    vector<int> dist(n, INT_MAX);
	    dist[0] = 0;
	    
	    for (int count = 1; count < n; count++)
	    {
	        for (auto x : edges)
	        {
	            int u = x[0];
	            int v = x[1];
	            int w = x[2];
	            
	            if (dist[u] != INT_MAX and dist[v] > dist[u] + w)
	            {
	                dist[v] = dist[u] + w;
	            }
	        }
	    }
	    
	    for (auto x : edges)
	    {
	        int u = x[0];
	        int v = x[1];
	        int w = x[2];
	        
	        if (dist[u] != INT_MAX and dist[v] > dist[u] + w)
	        {
	            return 1;
	        }
	    }
	    
	    return 0;
	}
};
