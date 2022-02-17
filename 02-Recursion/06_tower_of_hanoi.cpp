// shift n-1 disks from source to auxiliary tower by using destination tower
// shift n'th disk from source to destination by using auxiliary tower
// shift n-1 disks from auxiliary to destination by using source tower
class Solution
{
    public:
    void tower(int N, int from, int to, int aux, long long &res)
    {
        if (N == 1)
        {
            cout << "move disk " << N << " from rod " << from << " to " << "rod " << to << endl;
            res++;
            return;
        }
        tower(N-1, from, aux, to, res);
        res++;
        cout << "move disk " << N << " from rod " << from << " to " << "rod " << to << endl;
        tower(N-1, aux, to, from, res);
    }
    long long toh(int N, int from, int to, int aux) 
    {
        long long res = 0;
        tower(N, from, to, aux, res);
        return res;
    }   
};
