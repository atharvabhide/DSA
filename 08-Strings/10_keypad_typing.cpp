string printNumber(string s, int n) 
{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    string result = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' or s[i] == 'B' or s[i] == 'C')
        {
            result += '2';
        }
        if (s[i] == 'D' or s[i] == 'E' or s[i] == 'F')
        {
            result += '3';
        }
        if (s[i] == 'G' or s[i] == 'H' or s[i] == 'I')
        {
            result += '4';
        }
        if (s[i] == 'J' or s[i] == 'K' or s[i] == 'L')
        {
            result += '5';
        }
        if (s[i] == 'M' or s[i] == 'N' or s[i] == 'O')
        {
            result += '6';
        }
        if (s[i] == 'P' or s[i] == 'Q' or s[i] == 'R' or s[i] == 'S')
        {
            result += '7';
        }
        if (s[i] == 'T' or s[i] == 'U' or s[i] == 'V')
        {
            result += '8';
        }
        if (s[i] == 'W' or s[i] == 'X' or s[i] == 'Y' or s[i] == 'Z')
        {
            result += '9';
        }
    }
    return result;
}
