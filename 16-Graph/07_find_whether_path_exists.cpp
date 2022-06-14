class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    void dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int sr, int sc, bool &flag)
    {
        int n = grid.size();
        // boundary conditions
        if (sr < 0 || sc < 0) return;
        if (sr > n-1 || sc > n-1) return;
        if (grid[sr][sc] == 0) return;
        if (grid[sr][sc] == 2) flag = true;
        if (visited[sr][sc] == true) return;
        
        visited[sr][sc] = true;
        dfs(grid, visited, sr-1, sc, flag); // var jayla
        dfs(grid, visited, sr+1, sc, flag); // khali jayla
        dfs(grid, visited, sr, sc-1, flag); // left la jayla
        dfs(grid, visited, sr, sc+1, flag); // right la jayla
    }
    
    bool is_Possible(vector<vector<int>> &grid) 
    {
        vector<vector<bool>> visited;
        int sr,sc;
        for (int i = 0; i < grid.size(); i++)
        {
            vector<bool> v;
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    sr = i;
                    sc = j;
                }
                v.push_back(false);
            }
            visited.push_back(v);
        }
        bool flag = false;
        dfs(grid, visited, sr, sc, flag);
        return flag;
    }
};
