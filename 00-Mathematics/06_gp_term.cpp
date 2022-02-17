class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        double r = (double(B)/double(A));
        double result = double(A*(pow(r,N-1)));
        return result;
    }
};
