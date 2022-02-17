class Solution{
    public:
    //Complete this function
    void printNos(int N, int i = 1)
    {
        if (i > N)
        {
            return;
        }
        else
        {
            cout << i << " ";
            printNos(N, i+1);
        }
    }
};
