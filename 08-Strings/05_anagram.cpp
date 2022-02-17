class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        // make a count array of size 256
        // initially set all elements to zero
        // every time we hit a character in the first string, increment it's frequency in the array.
        // every time we hit a character in the second string, decrement it's frequency in the array.
        // finally, if all the array elements remain zero, then the strings are anagrams of each other.
        int arr[256] = {0};
        if (a.size() != b.size())
        {
            return false;
        }
        for (int i = 0; i < a.size(); i++)
        {
            arr[a[i]]++;
            arr[b[i]]--;
        }
        for (int i = 0; i < 256; i++)
        {
            if (arr[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};
