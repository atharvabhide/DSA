class Solution
{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool compare(pair<int,int> &a, pair<int,int> &b)
    {
        if (a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        vector<int> res;
        vector<pair<int , int>> hres;
        unordered_map<int,int> mp;
        
        for(int i = 0; i < n; ++i) 
        {
            mp[arr[i]]++;
        }
        
        
        for(int i = 0; i < n; ++i) 
        {
            if(mp.find(arr[i]) != mp.end()) 
            {
                hres.push_back({mp[arr[i]],arr[i]});
                mp.erase(arr[i]);
            }
        }
        
        sort(hres.begin(),hres.end(),compare);
        
        for(auto i: hres) 
        {
            for(int j = 0; j < i.first; ++j) res.push_back(i.second);
        }
        
        return res;
    }
};
