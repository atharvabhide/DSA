class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       unordered_map<char,int> hash;
       for (int i = 0; i < S.size(); i++)
       {
           hash[S[i]]++;
       }
       for (int i = 0; i < S.size(); i++)
       {
           if (hash[S[i]] == 1)
           {
               return S[i];
           }
       }
       return '$';
    }

};
