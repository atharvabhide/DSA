void frequencyCount(vector<int>& arr,int n, int p)
    { 
        unordered_map<int,int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }
        unordered_set<int> myset;
        for (int i = 0; i < n; i++)
        {
            myset.insert(arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (myset.find(i+1) != myset.end())
            {
                auto it = hash.find(i+1);
                arr[i] = it->second;
            }
            else
            {
                arr[i] = 0;
            }
        }
    }
