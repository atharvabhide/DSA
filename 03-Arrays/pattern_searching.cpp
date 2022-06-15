bool searchPattern(string str, string pat)
{
    int length = pat.size();
    
    for (int i = 0; i <= str.size()-length; i++)
    {
        string x = "";
        int j = i;
        while (j != i+length)
        {
            x += str[j];
            j++;
        }
        if (x == pat)
        {
            return true;
        }
    }
    return false;
}
