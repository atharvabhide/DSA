class Solution 
{
  public:
	void shortest_distance(vector<vector<int>>&matrix)
	{
	    for (int k = 0; k < matrix.size(); k++)
	    {
	        for (int i = 0; i < matrix.size(); i++)
	        {
	            for (int j = 0; j < matrix.size(); j++)
	            {
	                if (matrix[i][k] != -1 and matrix[k][j] != -1)
	                {
	                    if (matrix[i][j] == -1 || matrix[i][j] > matrix[i][k] + matrix[k][j])
	                    {
	                        matrix[i][j] = matrix[i][k] + matrix[k][j];
	                    }
	                }
	            }
	        }
	    }
	}
};
