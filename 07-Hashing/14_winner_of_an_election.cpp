class Solution
{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        map<string,int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int max = INT_MIN;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second > max)
            {
                max = it->second;
            }
        }
        vector<string> result;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second == max)
            {
                result.push_back(it->first);
                result.push_back(to_string(it->second));
                return result;
            }
        }
    }
};
