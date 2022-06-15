class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool cmp(pair<int,int> p1, pair<int,int> p2)
    {
        return p1.second < p2.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // slight variation of activity selection problem
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({start[i], end[i]});
        }
        sort(v.begin(), v.end(), cmp);
        
        int res = 1;
        int prev = 0;
        for (int curr = 1; curr < n; curr++)
        {
            if (v[curr].first > v[prev].second)
            {
                res++;
                prev = curr;
            }
        }
        return res;
    }
};
