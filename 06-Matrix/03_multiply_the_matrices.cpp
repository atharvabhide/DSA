class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        int r1 = A.size();
        int c1 = A[0].size();
        int r2 = B.size();
        int c2 = B[0].size();
        
        if (c1!=r2)
        {
            return {{-1}};
        }
        vector<vector<int>> resMat(r1);
        for (int i = 0; i < r1; i++)
        {
            resMat[i].assign(c2,0);
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int res = 0;
                for (int k = 0; k < r2; k++)
                {
                    res += A[i][k] * B[k][j];
                }
                resMat[i][j] = res;
            }
        }
        return resMat;
    }
};
