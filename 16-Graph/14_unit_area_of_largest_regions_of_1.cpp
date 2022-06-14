class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    void dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int sr, int sc, int &count)
    {
        // boundary conditions
        if (sr < 0 || sc < 0) return;
        if (sr > grid.size()-1 || sc > grid[0].size()-1) return;
        if (visited[sr][sc] == true) return;
        if (grid[sr][sc] == 0) return;
        
        visited[sr][sc] = true;
        count++;
        dfs(grid, visited, sr-1, sc, count);
        dfs(grid, visited, sr+1, sc, count);
        dfs(grid, visited, sr, sc-1, count);
        dfs(grid, visited, sr, sc+1, count);
        dfs(grid, visited, sr-1, sc-1, count);
        dfs(grid, visited, sr-1, sc+1, count);
        dfs(grid, visited, sr+1, sc-1, count);
        dfs(grid, visited, sr+1, sc+1, count);
    }
    
    int findMaxArea(vector<vector<int>>& grid) 
    {
        vector<vector<bool>> visited;
        int sr,sc;
        for (int i = 0; i < grid.size(); i++)
        {
            vector<bool> v;
            for (int j = 0; j < grid[i].size(); j++)
            {
                v.push_back(false);
            }
            visited.push_back(v);
        }
        
        int area = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 1 and visited[i][j] == false)
                {
                    int count = 0;
                    dfs(grid, visited, i, j, count);
                    area = max(area, count);
                }
            }
        }
        return area;
    }
};
