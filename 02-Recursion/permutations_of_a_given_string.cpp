class Solution
{
	public:
	
	    void helper(string S, int i, set<string> &res)
	    {
	        // base case
	        if (i == S.size())
	        {
	            res.insert(S);
	            return;
	        }
	        
	        for (int j = i; j < S.size(); j++)
	        {
	            swap(S[i], S[j]);
	            helper(S, i+1, res);
	            // backtrack to original state
	            swap(S[i], S[j]);
	        }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    set<string> res;
		    helper(S, 0, res);
		    vector<string> v;
		    for (auto it = res.begin(); it != res.end(); it++)
		    {
		        v.push_back(*it);
		    }
		    return v;
		}
};
