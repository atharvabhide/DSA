class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long findNthFibonacci(int number)
    {
        vector<long long> v;
        v.push_back(1);
        v.push_back(1);
        
        for (int i = 2; i < number+1; i++)
        {
            v.push_back(v[i-2] + v[i-1]);
        }
        
        return v[number-1];
    }
};
