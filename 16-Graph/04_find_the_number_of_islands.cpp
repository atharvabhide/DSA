class Solution 
{
  public:
    // Function to find the number of islands.
    
    void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int sr, int sc)
    {
        // boundary conditions
        if (sr < 0 || sc < 0) return;
        if (sr > grid.size()-1 || sc > grid[0].size()-1) return;
        if (visited[sr][sc] == true) return;
        if (grid[sr][sc] == '0') return;
        
        visited[sr][sc] = true;
        // var jayla
        dfs(grid, visited, sr-1, sc);
        // khali jayla
        dfs(grid, visited, sr+1, sc);
        // left la jayla
        dfs(grid, visited, sr, sc-1);
        // right la jayla
        dfs(grid, visited, sr, sc+1);
        // left upper diagonal
        dfs(grid, visited, sr-1, sc-1);
        // right upper diagonal
        dfs(grid, visited, sr-1, sc+1);
        // left bottom diagonal
        dfs(grid, visited, sr+1, sc-1);
        // right bottom diagonal
        dfs(grid, visited, sr+1, sc+1);
    }
    
    int numIslands(vector<vector<char>>& grid) 
    {
        vector<vector<bool>> visited;
        int sr,sc;
        for (int i = 0; i < grid.size(); i++)
        {
            vector<bool> v;
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    sr = i;
                    sc = j;
                }
                v.push_back(false);
            }
            visited.push_back(v);
        }
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == '1' and visited[i][j] == false)
                {
                    count++;
                    dfs(grid, visited, i, j);
                }
            }
        }
        return count;
    }
};
