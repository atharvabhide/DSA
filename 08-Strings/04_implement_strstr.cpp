int strstr(string s, string x)
{
     //Your code here
     int res = s.find(x);
     if (res==string::npos)
     {
         return -1;
     }
     else
     {
         return res;
     }
     
}
