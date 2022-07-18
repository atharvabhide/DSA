void power_set(string &s, string res, int i, vector<string> &v)
{
    // watch code in 10 explanation
    if (i == s.size())
    {
        v.push_back(res);
        return;
    }
    // take vali call
    power_set(s, res+s[i], i+1, v);
    // not take vali call
    power_set(s, res, i+1, v);
    return;
}

vector<string> powerSet(string s)
{
    string res = "";
    int i = 0;
    vector<string> v;
    power_set(s, res, i, v);
    return v;
}
