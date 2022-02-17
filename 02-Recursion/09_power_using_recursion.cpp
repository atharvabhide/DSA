class Solution{
  public:
    //Complete this function
    int RecursivePower(int n,int p)
    {
        if (p == 0)
        {
            return 1;
        }
        else
        {
            return n * RecursivePower(n, p-1);
        }
    }
};
