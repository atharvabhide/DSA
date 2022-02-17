class Solution
{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map<int,int> m;
        for (int i = 0; i < size; i++)
        {
            m[a[i]]++;
        }
        int check = size/2;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second > check)
            {
                return it->first;
            }
        }
        return -1;
    }
};
